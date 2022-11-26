#include "main.h"

extern char **environ;

int load_prog(char **tokens)
{

pid_t pid = fork();

if (pid == 0)
{

if (execve("./root", tokens, environ) == -1)
{
perror("load");
exit(1);
}
else
execve("./root", tokens, environ);

}

else if (pid < 0)
{
perror("load");
}

else
{
wait(NULL);
}
return (1);
}
