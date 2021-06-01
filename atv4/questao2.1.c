#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int v[9];
int i, k, v_max, v_min, v_total;
float c , medi;

int main(int argc, char *argv[]) 
{

    printf("Digite ate 10 numeros aleatoriamente\n");
    
        for (i=0;i<=9;i++){
        printf("\nnúmero %d",i);
        scanf("%d",&v[i]);
        if (v[i]==v[i-1]+1){
            break;
            }
    	}
    
            k=i;



        for(k=0;k<=i;k++){
                printf("%d\t", v[k]);

        }

            for(k=0;k<=i;k++){
                v_max=v[0];

                    if(v[k]>v_max){
                    v_max=v[k];
                    }
            }

                for(k=0;k<=i;k++){

                    v_min=v[0];

                    if (v[k]<v_min){
                    v_min=v[k];
                    }
                }
                    v_total=v[0];

                    for(k=1;k<=i;k++){
                        v_total=v_total + v[k];

                    }



        printf (" \n O maior deles eh %d\n",v_max);
        printf("\n O menor deles eh %d\n",v_min);
        printf("\n A soma total deles eh %d\n",v_total);
        printf("\n a media deles eh %.4f",medi= v_total /k);

}
