#include "factor.h"

/**
 * main - main function
 * 
 * 
 * Return: void
*/
int main(int argc, char *argv[])
{
        File *fptr;
        size_t count;
        ssize_t line;
        char *buffer = NULL;


        if (arg != 2)
        {
            fprintf(stderr, "Usage: factor <filename>\n");
            exti(EXIT_FAILURE);
        }
        fptr = fopen(agrv[1], "r");
        if (fprt == NULL)
        {
                fprintf(stderr, "error: can't open file %s\n", argv[1]);
                exit(EXIT_FAILURE);
        }
        while((line = getline(&buffer, &count, fptr)) != -1)
        {
                factorize(buffer);
        }
return (0);
}
