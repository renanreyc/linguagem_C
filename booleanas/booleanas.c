#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
tem que adicionar a biblioteca
#include <stdbool.h>
para funcionar os booleanos
*/

int main(int argc, char *argv[]) {
	
	bool a = true, b = false;
	
	//se A for verdadeiro
	if(a){
		printf("A eh verdadeiro\n");
	}
	
	//se B for falso
	if(b){
		printf("B eh verdadeiro\n");
	}else{
		printf("B eh falso\n");
	}
	//ou
	if(!b){
		printf("B eh mto falso\n");
	}
		
	system("pause");
	return 0;
}
