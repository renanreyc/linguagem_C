#include <stdio.h>
#include <stdlib.h>
/* questão 3 */

int v[9];
int i, k, valorMax, valorMin, valorTotal;
float media;

int main(int argc, char *argv[]) 
{
	printf("Digite 10 numeros inteiros ou pare quando digitar dois inteiros iguais consecutivos\n");
	
	i=0;
	
    while(i <= 10){
    	printf("\nNumero %d: ",i+1);
        scanf("%d",&v[i]);
        
        
        if (v[i]==v[i-1]){
        	break;
        }else{
        	i++;
		}
        
    }
    
	valorMax=v[0];
	k=0;

   while(k <= i){
   	        
        if(v[k]>valorMax){
        	valorMax=v[k];
        	k++;
        }else{
        	valorMax=valorMax;
        	k++;
		}
        
    }
	
	valorMin=v[0];
	k=0;
	
    while(k <= i){

        if (v[k]<valorMin){
        	valorMin=v[k];
        	k++;
        }else{
        	valorMin=valorMin;
        	k++;
		}
    }
    
    valorTotal=0;
	k=0;
	
    while(k <= i){
        valorTotal=valorTotal + v[k];
		k++;
    }
media = valorTotal/(i+1);
	
    printf (" \n O maior numero eh %d\n",valorMax);
    printf("\n O menor numero eh %d\n",valorMin);
    printf("\n A soma dos numeros eh igual a %d\n",valorTotal);
    printf("\n A media dos numeros eh igual a %.2f\n",media);
	
	system("pause");
	return 0;
}

