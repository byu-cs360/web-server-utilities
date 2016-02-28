======================================================================
Example code showing how to use the execv() and execve() systems calls
to execute an external program from C.

IMPORTANT: The code uses fork() to execute the program in a separate
process.  If you don't do this, then you replace the current program
you are running with the new one, and you can't execute any subsequent
code.  When execv() or execve() finishes, it does NOT return to your
program!
======================================================================

Contents:

1) Makefile - Will compile the code and keep track of dependencies, so
that the code is recompiled correctly when any of the source code is
modified.

make all
(will compile all the code)
make clean
(will remove object files)
make realclean
(will remove object files, dependency files, and the executable)

2) exec.cc - A program that runs the 'ls' command and a python script
using calls to execv() and execve().

Syntax:

./exec

3) script.py - A python script that prints some environment variables,
showing that the execve() call can use this method to pass data to a
script.
