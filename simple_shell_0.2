#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

/**
 *Simple Shell 0.2 project
 * -----------------------
 * An extension of Simple Shell 0.1 that now handles command lines with arguments.
 *
 * Return: Always returns 0.
 */
int main(void)
{
    char *buffer = NULL;  // Buffer to store user input
    size_t bufsize = 0;   // Initial size of the buffer

    while (1)
    {
        // Display the shell prompt
        write(STDOUT_FILENO, "#cisfun$ ", 9);

        // Read user input from the command line
        if (getline(&buffer, &bufsize, stdin) == -1)
        {
            if (feof(stdin))  // Check for the end of file (Ctrl+D)
            {
                // Print a newline and exit the shell successfully
                write(STDOUT_FILENO, "\n", 1);
                free(buffer);  // Free the allocated memory for the buffer
                exit(EXIT_SUCCESS);
            }

            // Print an error message, free the buffer, and exit with failure
            perror("getline");
            free(buffer);
            exit(EXIT_FAILURE);
        }

        // Remove the newline character at the end of the input
        buffer[strcspn(buffer, "\n")] = '\0';

        // Execute the command in a child process
        if (fork() == 0)
        {
            // Child process

            // Tokenize the command and arguments
            char *token = strtok(buffer, " ");
            char **args = malloc(sizeof(char *) * 2);
            int argCount = 0;

            while (token != NULL)
            {
                args[argCount++] = token;
                args = realloc(args, sizeof(char *) * (argCount + 2));
                token = strtok(NULL, " ");
            }

            args[argCount] = NULL;

            // Use execve to execute the command with arguments
            if (execve(args[0], args, NULL) == -1)
            {
                // Print an error message and exit the child process with failure
                perror("execve");
                free(buffer);
                free(args);
                exit(EXIT_FAILURE);
            }
        }
        else
        {
            // Parent process
            wait(NULL);  // Wait for the child process to complete
        }
    }

    return (0);  // Return 0 to indicate successful execution
}
