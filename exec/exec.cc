#include <sys/types.h>
#include <unistd.h>
#include <wait.h>

#include <iostream>
#include <string>

using namespace std;

void executeCommand(string,string);
void executeScript(string);

int main(int argc, char** argv)
{
    executeCommand("/bin/ls","-l");
    executeScript("script.py");
}

void
executeCommand(string command, string argument)
{
    cout << endl;

      // setup argument array
    char* argv[3];
    argv[0] = (char *) command.c_str();
    argv[1] = (char *) argument.c_str();
    argv[2] = 0;    

      // execute script in a separate process
    pid_t pid = fork ();
    if (pid == 0 ) {
        execv(command.c_str(),argv);
    }
    int status;
    waitpid(pid,&status,0);
}

void
executeScript(string file)
{
    cout << endl;

      // setup argument array
    char* argv[2];
    argv[0] = (char *) file.c_str();
    argv[1] = 0;

      // setup environment variable array
    string name = "Daniel";
    char* envp[3];
    envp[0] = "SCRIPT_VERSION=1.0";
    envp[1] = (char *) (string("SCRIPT_NAME=") + name).c_str();
    envp[2] = 0;

      // execute script
    pid_t pid = fork ();
    if (pid == 0 ) {
        execve(file.c_str(),argv,envp);
    }
    int status;
    waitpid(pid,&status,0);
}
