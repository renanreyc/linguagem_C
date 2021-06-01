/*
 * Autor: Renan Rey
 * Data: maio/2021
 */
 
#include <stdio.h>
#include <string.h>

unsigned int contVogal(char *, char *);

void main ()
{
    unsigned short i;
    char vogais[500], texto[1000];
    while (scanf(" %[^\n]", vogais) != EOF)
    {
        scanf(" %[^\n]", texto);
        printf("%d\n", contVogal(vogais, texto));
        memset(vogais, 0, sizeof(vogais));
        memset(texto, 0, sizeof(texto));
    }

}

unsigned int contVogal(char *vogais, char *texto)
{
    unsigned short i, j;
    unsigned short qtsVogais;
    i = 0;
    qtsVogais = 0;
    while (vogais[i])
    {
        j = 0;
        while (texto[j])
        {
            if (vogais[i] == texto[j])
                qtsVogais++;
            j++;
        }
        i++;
    }
    return qtsVogais;
}