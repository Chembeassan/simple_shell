#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * Simple Shell betty
 * Displays a prompt and waits for the user to enter a command first.
 * Executes simple, one-word commands only.
 * Handles errors and the "end of file" condition (Ctrl+D).
 *
 * Return: Always 0.
 */
int main(void)
{
    char *buffer = NULL;
    size_t bufsize = 0;

    while (1)
    {
        /* Display prompt */
        write(STDOUT_FILENO, "#cisfun$ ", 9);

        /* Read user input */
        if (getline(&buffer, &bufsize, stdin) == -1)
        {
            if (feof(stdin)) /* Check for end of file (Ctrl+D) */
            {
                write(STDOUT_FILENO, "\n", 1);
                free(buffer);
                exit(EXIT_SUCCESS);
            }
            perror("getline");
            free(buffer);
            exit(EXIT_FAILURE);
        }

        /* Execute command */
        if (fork() == 0)
        {
            /* Child process */
            if (execve(buffer, NULL, NULL) == -1)
            {
                perror("execve");
                exit(EXIT_FAILURE);
            }
        }
        else
        {
            /* Parent process */
            wait(NULL);
        }
    }

    return (0);
}
