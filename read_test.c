#include "main.h"

char *read_cmd(void)
{

char *lineptr = NULL;
size_t n, buf = 0;

while (1)
{
write(1, "", 1);

n = getline(&lineptr, &buf, stdin);

if (n == -1)
{
if (feof(0))
{
exit(0);
}
else
{
perror("shell_test");
exit(1);
}
}

return (lineptr);
}
