#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	FILE *ficheiro;
	char nome[50];
	char morada[50];
	
//abrir o ficheiro
ficheiro=fopen("exemplo2.txt","a+");

while(strcmp(nome,"x")!=0){
printf("indique o nome: ");
gets(nome);
if(strcmp(nome,"x")!=0){
fputs(nome, ficheiro);
fputs("\n",ficheiro);
printf("indique a morada: ");
gets(morada);
fputs(morada, ficheiro);
}
}

//fechar ficheiro
fclose(ficheiro);
	
	return 0;
}
