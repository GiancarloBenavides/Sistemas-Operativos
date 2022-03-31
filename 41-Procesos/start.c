#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* función principal */
int main() {
    
    pid_t  pid;

    /* crea un nuevo proceso */
    pid = fork();
    if (pid < 0) {
        /* error */
        fprintf(stderr, "No he podido crear el proceso hijo \n");
        exit(-1);
    }
    if (pid == 0) 
        /* proceso hijo */
        printf("Child Complete");
        execlp("/bin/ls", "ls", NULL);

    else { 
        /* padre */
        wait(NULL);
        printf("Child Complete");
        exit(0);
    }
}

