#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
  printf("hello world (pid:%d)\n", (int)getpid());
  int rc = fork();
  if (rc < 0)
  {
    fprintf(stderr, "O fork falhou\n");
    exit(1);
  }
  else if (rc == 0) // child: redirect stdout to a file
  {
    close(STDOUT_FILENO);
    open("./output_redirection.output", O_CREAT | O_WRONLY | O_TRUNC, S_IRWXU);
    // now exec wc
    char *myargs[3]; // cria a lista do argv. argc=2
    // strdup -> aloca memoria em heap e copia a string seu uso aqui foi para deixar essas string modificaveis.
    // caso fizesse myargs[0] = "wc" -> string poderia ficar em .rodata (read only memory)
    myargs[0] = strdup("wc");                   // o primeiro é sempre o programa em si (argv[0])
    myargs[1] = strdup("output_redirection.c"); // argumentos do programa
    myargs[2] = NULL;                           // marks end of array
    execvp(myargs[0], myargs);                  // runs word count
    printf("hello, I am child (pid:%d)\n", (int)getpid());
  }
  else // parent goes down this path (main)
  {
    int wc = wait(NULL); // suspende execução do processo pai ate que um de seus filhos termine a execução
    printf("hello, I am parent of %d (wc:%d) (pid:%d)\n", rc, wc, (int)getpid());
  }
  return 0;
}