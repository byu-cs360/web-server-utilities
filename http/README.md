## HTTP Parser

Example code for creating and parsing HTTP messages.

### Contents

1) Makefile - Will compile the code and keep track of dependencies, so
that the code is recompiled correctly when any of the source code is
modified.

make all
(will compile all the code)
make clean
(will remove object files)
make realclean
(will remove object files, dependency files, and the executable)

2) test.cc - Uses the HTTP parser to create and parse HTTP request and
response messages.  Prints out its results.

Syntax:

```
./test
```

3) HTTPRequest.h/.cc - Code to create an HTTP request or to parse an
incoming HTTP request.

4) HTTPResponse.h/.cc - Code to create an HTTP response or to parse an
incoming HTTP response.

5) Tokenizer.h/.cc - Code that tokenizes a string based on a delimiter.
