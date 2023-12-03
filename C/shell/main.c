#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {
    char command[256];

    // If a file is provided, redirect stdin
    if (argc > 1) {
        if (!freopen(argv[1], "r", stdin)) {
            perror("freopen");
            return 1;
        }
    }

    while (1) {
        // Display prompt if reading from user
        if (argc == 1) {
            printf("myshell> ");
            fflush(stdout);
        }

        // Read the command
        if (fgets(command, sizeof(command), stdin) == NULL) {
            // Exit loop if EOF reached (Ctrl-D for user input or end of file)
            break;
        }

        // Remove newline character
        size_t len = strlen(command);
        if (len > 0 && command[len-1] == '\n') {
            command[len-1] = '\0';
        }

        // Exit the shell if command is "exit"
        if (strcmp(command, "exit") == 0) {
            break;
        }

        // Execute the command
        pid_t pid = fork();
        if (pid == 0) { // Child process
            execlp(command, command, (char *)NULL);
            perror("execlp");
            exit(1);
        } else if (pid > 0) { // Parent process
            wait(NULL); // Wait for child to complete
        } else {
            perror("fork");
        }
    }

    return 0;
}
