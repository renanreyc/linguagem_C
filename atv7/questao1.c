#include <stdio.h>
#include <stdlib.h>

/* 
1.	Elabore um programa que crie 3 arquivos, no primeiro salve uma sequência de números 
	inteiros de [0 a 100], no segundo arquivo de [200 a 300] e no último arquivo uma 
	sequência de [500 a 1000]. Obs. Escolham os nomes que desejarem para os arquivos. 
*/

int main(void) {
	
	FILE *file;
	file = fopen("D:\\computacao\\c\\atv7\\fileOne.txt", "w");
	
	fprintf(file,"Arquivo One");
	
	
	file = fopen("fileOne.txt", "a");
	fprintf(file, "Primeira linha");


	
	
	fclose(file);	
	return 0;
}

/*
#include <stdio.h>
#include <wchar.h>
#include <stdlib.h>
struct File {
   char* name;
   char* content;
};
int main(void)
{
 struct File file;
 file.name = "LPI-Noite.txt";
 file.content = "Aula sobre arquivos";
 wchar_t* widechar = "?";
 char* teste = "?";
 int character;
 // criando a variável ponteiro para o arquivo
 FILE *pont_arq;
 //abrindo o arquivo
 pont_arq = fopen(file.name, "a+");
 //Read
 while((character = fgetc(pont_arq)) != EOF)
 {
    printf("%c",character);
 }
 printf("\n");
 //fprintf(pont_arq, "%c ", character);
 fprintf(pont_arq, teste);
 // fechando arquivo
 fclose(pont_arq);
 //mensagem para o usuário
 printf("O arquivo foi criado com sucesso!\n");
 system("pause");
 return(0);
*/

