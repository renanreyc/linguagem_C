/*
 * Autor: Renan Rey
 * Data: maio/2021
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
 
int main(void) {
    int i, tam, letra_minuscula, 
        letra_maiuscula, numero, aux;
    char Senha[50];
 
    while(scanf("%[^\n]", Senha) != EOF) {
        getchar();
 
        tam = strlen(Senha);
 
        letra_maiuscula = 0;
        letra_minuscula = 0;
        numero = 0;
        i = 0;
        aux = 0;

        while(Senha[i] != '\0') {
            if(isalpha(Senha[i])) {
               if(isupper(Senha[i])) {
                   letra_maiuscula++;
               }

                else {
                    letra_minuscula++;
                }
            }
 
            else if(Senha[i] >= '0' && Senha[i] <= '9') {
                numero++;
            }

            else if(Senha[i] == ' ') {
                aux = 1;
                break;
            }

            else if((Senha[i] >= '!' && Senha[i] <= '/') ||
                    (Senha[i] >= ':' && Senha[i] <= '@') ||
                    (Senha[i] >= '[' && Senha[i] <= '`') ||
                    (Senha[i] >= '{' && Senha[i] <= 255)) {
                aux = 1;
                break;
            }

            i++;
        }
        
        
        if((tam >= 6) && (tam <= 32)) {
            if((letra_maiuscula >= 1) && (letra_minuscula >= 1) && (numero >= 1) && aux == 0) {
                printf("Senha valida.\n");  
            } else {
                printf("Senha invalida.\n");
            }
        } else {
            printf("Senha invalida.\n");
        }
    }
 
    return 0;
}