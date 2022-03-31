#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
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

    if (pid == 0) {
        /* proceso hijo */
        printf("Soy un proceso hijo, mi PID es %d y mi PPID es %d \n", getpid(), getppid());
        execlp("/bin/ls", "ls", NULL);

    } else { 
        /* padre */
        wait(NULL);
        printf("Soy un proceso padre, mi PID es %d y el PID de mi hijo es %d \n", getpid(), pid);
        exit(0);
    }
}

