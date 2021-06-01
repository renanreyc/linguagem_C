#include <stdio.h>
#include <stdlib.h>

/* questão 2 */

int v[9];
int i, k, valorMax, valorMin, valorTotal;
float media;

int main(int argc, char *argv[]) 
{
	printf("Digite 10 numeros inteiros ou pare quando digitar dois inteiros iguais consecutivos\n");

    for (i=0;i<=9;i++){
    	printf("\nNumero %d: ",i+1);
        scanf("%d",&v[i]);
        if (v[i]==v[i-1]){
            break;
            }
    }
	
	valorMax=v[0];

   for(k=1;k<=i;k++){
   	        
        if(v[k]>valorMax){
        valorMax=v[k];
        }else{
        	valorMax=valorMax;
		}
        
    }
	
	valorMin=v[0];
	
    for(k=1;k<=i;k++){

        if (v[k]<valorMin){
        valorMin=v[k];
        }else{
        	valorMin=valorMin;
		}
    }
    
    valorTotal=0;

    for(k=0;k<=i;k++){
        valorTotal=valorTotal + v[k];

    }

	media = valorTotal/(i+1);
	
    printf (" \n O maior numero eh %d\n",valorMax);
    printf("\n O menor numero eh %d\n",valorMin);
    printf("\n A soma dos numeros eh igual a %d\n",valorTotal);
    printf("\n A media dos numeros eh igual a %.2f\n",media);
	
	system("pause");
	return 0;
}
