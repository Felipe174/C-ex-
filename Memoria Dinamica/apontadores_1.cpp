#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	char *nome; //array de caracteres
	int *notas; 
	int i;
	
	nome=(char*)malloc(sizeof(char)*60);
	notas=(int*)malloc(sizeof(int)*4);
	
	printf("indique o nome: ");
	gets(nome);
	
	for(i=0;i<4;i++){
	printf("indique uma nota: ");
	scanf("%d",&notas[i]);
}

printf("nome: %s", nome);
	for(i=0;i<4;i++)
	printf("notas: %d\n",notas[i]);	
	
	free(nome);
	free(notas);
	
	
	return 0;
}
