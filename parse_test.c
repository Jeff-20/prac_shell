#include "main.h"

char **parsing_str(char *lineptr)
{
unsigned int bufsize = 1024;
char *piece;
char **tokens;
unsigned int i = 0;

tokens = malloc(sizeof(char *) * bufsize);

if (tokens == NULL)
perror(" tokens' memory allocation failed");

else
{
piece = strtok(lineptr, " ");
printf("%s\n", piece);
tokens[i] = piece;

while (piece != NULL)
{
piece = strtok(NULL, " ");
tokens[i] = piece;
i++;
}
if (i >= bufsize)
bufsize *= 2;
tokens = malloc(sizeof(char *) * bufsize);
if (tokens == NULL)
perror("tokens' memory reallocation failed");
}

tokens[i] = NULL;
return (tokens);
}
