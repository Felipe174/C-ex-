#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	FILE *ficheiro;
	char nome[50];
	char morada[50];
	
//abrir o ficheiro
ficheiro=fopen("exemplo2.txt","r");

while(!feof(ficheiro)){
fgets(nome,50,ficheiro);
printf("Nome: %s\n",nome);
fgets(morada,50,ficheiro);
printf("morada:%s\n",morada);
}

//fechar ficheiro
fclose(ficheiro);
	
	return 0;
}
