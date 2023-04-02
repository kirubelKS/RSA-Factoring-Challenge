#ifndef _factor_h_
#define _factor_h_


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define _GNU_SOURCE


/* size_t getline(char **lineptr, size_t *n, File *stream); */
int factorize(char *buffer);

#endif /* _factor_h_*/