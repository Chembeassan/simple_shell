#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

/**
 *Simple Shell 0.1 project
 * -----------------------
 * This program functions as a basic shell, performing the following tasks:
 * 1. Display a prompt and wait for the user to enter a command.
 * 2. Execute simple, one-word commands.
 * 3. Handle errors, including the "end of file" condition (Ctrl+D).
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

            // Use execve to execute the command entered by the user
            if (execve(buffer, NULL, NULL) == -1)
            {
                // Print an error message and exit the child process with failure
                perror("execve");
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
