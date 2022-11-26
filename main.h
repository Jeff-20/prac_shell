#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

char *read_cmd(void);
char **parsing_str(char *lineptr);
int load_prog(char **tokens);

#endif /*MAIN_H*/
