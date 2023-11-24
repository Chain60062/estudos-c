#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *file;
char *cat(char *, char *);
int main(void)
{
    int n = 1;
    char c;
    char *p = malloc(n + 1);

    while((c = getchar() != '\n') == 1){
        p = realloc(p, n * 2);
        p[n] = c;
        n++;
    }
    p[n] = '\0';
    printf("%s", p);
    // char *p;
    // p = cat("feed", " and seed");
    // printf("%s\n", p);
    // free(p);
    // p = NULL;
}

char *cat(char *firststr, char *secstr)
{
    char *newstr = malloc(strlen(firststr) + strlen(secstr) + 1);

    if (!newstr)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    size_t i;
    for (i = 0; i < strlen(firststr); i++)
    {
        newstr[i] = firststr[i];
    }
    for (size_t j = 0; j < strlen(secstr); j++)
    {
        newstr[i + j] = secstr[j];
    }
    newstr[i + strlen(secstr)] = '\0';

    return newstr;
}