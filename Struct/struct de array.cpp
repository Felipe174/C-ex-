#include<stdio.h>
#include<locale.h>
#include<string.h>

//declaração struct
struct dados{
	char nome[40];
	char sexo;
	int idade;
	float vencimento;
	char residencia[30];
};

//declaração do array
struct dados trabalhadores[5];

int main(){
	setlocale(LC_ALL,"portuguese");
	int i,homens,mulheres,soma,media;
	
	for(i=0;i<5;i++){
		printf("indique o nome do trabalhador %d: ",i+1);
		gets(trabalhadores[i].nome);
		printf("indique o sexo do trabalhador: ");
		trabalhadores[i].sexo=getchar();
		printf("indique o idade do trabalhador: ");
		scanf("%d",&trabalhadores[i].idade);
		printf("indique o vencimento do trabalhador: ");
		scanf("%d",&trabalhadores[i].vencimento);
		getchar();
		printf("indique o local de residenci do trabalhador:");
		gets(trabalhadores[i].residencia);
	}
	
	//contagens
	homens=0;
	mulheres=0;
	for(i=0;i<5;i++){
		if(trabalhadores[i].sexo=='M')
		homens++;
		if(trabalhadores[i].sexo=='F')
		mulheres++;
}
printf("\nexistem %d homens",homens);
printf("\nexistem %d mulheres",mulheres);

//media
soma=0;
for(i=0;i<5;i++){
	soma=soma+trabalhadores[i].vencimento;
}
media=soma/5;
printf("\nmedia do vencimentos é %.2f",media);

//pesquisa de idades
for(i=0;i<5;i++){
	if (trabalhadores[i].idade>=20 && trabalhadores[i].idade<=30){
		printf("\ndados do trabalhador\n");
		printf("\nnome:%s",trabalhadores[i].nome);
		printf("\nsexo:%c",trabalhadores[i].sexo);
		printf("\nidade:%d",trabalhadores[i].idade);
		printf("\nvencimento:%.2f",trabalhadores[i].vencimento);	
		printf("\nresidencia:%s",trabalhadores[i].residencia);	
	}
}

//pesquisa por localidade de residencia
for(i=0;i<5;i++){
	if (strcmp(trabalhadores[i].residencia,"braga")==0){
		printf("\ndados do trabalhador\n");
		printf("\nnome:%s",trabalhadores[i].nome);
		printf("\nsexo:%c",trabalhadores[i].sexo);
		printf("\nidade:%d",trabalhadores[i].idade);
		printf("\nvencimento:%.2f",trabalhadores[i].vencimento);	
		printf("\nresidencia:%s",trabalhadores[i].residencia);	
	}
}
	return 0;
}
