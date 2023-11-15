Simple Shell Project
Introduction
Welcome to my simple Shell project! This repository contains the source code for a basic UNIX command line interpreter. The project has bee designed in multiple stages, each building on the previous one to enhance functionality and introduce new features.

Project Stages
1. Simple Shell 0.1
Basic shell functionality.
Displays a prompt, awaits user commands.
Executes simple, one-word commands.
Handles errors and the "end of file" condition (Ctrl+D).
2. Simple Shell 0.2
Introduces the ability to handle command lines with arguments.
3. Simple Shell 0.3
Extends functionality to handle the PATH.
Ensures that fork is not called if the command doesn’t exist.
4. Simple Shell 0.4
Implements the exit built-in command for shell termination.
5. Simple Shell 1.0
Introduces the env built-in command to display the current environment.
6. Simple Shell 0.1.1 (Advanced)
Implements a custom getline function.
Utilizes a buffer for efficient character reading.
7. Simple Shell 0.2.1 (Advanced)
Prohibits the use of strtok in the code.
8. Simple Shell 0.4.1 (Advanced)
Enhances the exit built-in to handle arguments for status.
9. setenv, unsetenv (Advanced)
Implements setenv and unsetenv builtin commands.
10. cd (Advanced)
Implements the cd built-in command to change the current directory.
11. ; (Advanced)
Handles the commands separator ";".
12. && and || (Advanced)
Manages the logical operators && and ||.
13. alias (Advanced)
Implements the alias builtin command.
14. Variables (Advanced)
Handles variables replacement, including $? and $$.
15. Comments (Advanced)
Supports comments in the shell using the "#" symbol.
16. File as input (Advanced)
Enables the shell to take a file as a command line argument.
The file contains commands to be executed one per line.
