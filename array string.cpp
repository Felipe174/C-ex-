#include<stdio.h>
#include<locale.h>
#include<string.h>

//declaração de strings
char nomes[9][40];
//posso ter 9 nomes, cada um com maximo de 40 caracteres

int main () {
    setlocale(LC_ALL, "Portuguese") ;  
    int i,j;
    char aux[40];
    
//leitura das strings
for(i=0;i<9;i++){
	printf("indique um nome: ");
	gets(nomes[i]);
}

//escrita das strings
for(i=0;i<9;i++){
	printf("%s\n",nomes[i]);
}

//ordenação alfabetica ou crescente
for(i=0;i<8;i++){
	for(j=0;j<9;j++){
		if(strcmp(nomes[i],nomes[j])>0){
			strcpy(aux,nomes[i]);
			strcpy(nomes[i],nomes[j]);
			strcpy(nomes[j],aux);
		}
	}
}
printf("\n---ordenação crescente---");
for()


return 0;
}


//array string_2


#include<stdio.h>
#include<locale.h>
#include<string.h>

//declaração de array
char equipas[6][30];
int pontuacao[6];


int main () {
    setlocale(LC_ALL, "Portuguese") ;  
    int i,j,aux;
    char aux2[30];
    
//leitura 
for(i=0;i<6;i++){
	printf("indique a equipa: ");
	gets(equipas[i]);
	printf("indique a pontuação da equipa: ");
	scanf("%d",&pontuacao[i]);
}

//ordenação 
for(i=0;i<5;i++){
	for(j=i+1;j<6;j++){
		if(pontuacao[i]>pontuacao[j]){
			aux=pontuacao[j];
			pontuacao[i]=pontuacao[j];
			pontuacao[j]=aux;
			strcpy(aux2,equipas[i]);
			strcpy(equipas[i],equipas[j]);
			strcpy(equipas[j],aux2);
		}
	}
}
printf("\nClassificação\n");

for(i=0;i<6;i++){
	printf("\n%dº - %s - %d pontos",i+1,   equipas[i],pontuacao[i]);
}


return 0;
}
