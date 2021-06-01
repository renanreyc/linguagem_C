/*
 * Autor: Renan Rey
 * Data: maio/2021
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int strcicmp(char const *a, char const *b)
{
    for (;; a++, b++) {
        int d = tolower(*a) - tolower(*b);
        if (d != 0 || !*a)
            return d;
    }
}

int compara(const void *a, const void *b)
{
    const char *s1 = (const char *) a;
    const char *s2 = (const char *) b;

    return strcicmp(s2, s1);
}

int main()
{
    char nome[1000][101];
    int num = 0;

    while (fgets(nome[num], 101, stdin))
        ++num;

    qsort(nome, num, 101, compara);

    printf("%s", nome[0]);

    return 0;
}