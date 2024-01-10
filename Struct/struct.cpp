#include<stdio.h>
#include<locale.h>
#include<string.h>

//declaração struct
struct dados_pessoais{
	char nome[50];
	char sexo;
	int idade;
	float vencimento;
};

//declaração da variavel de struct
struct dados_pessoais trabalhador;

int main(){
	setlocale(LC_ALL,"portuguese");
	
//leitura de estrutura
printf("indique o nome do trabalhador:");
gets(trabalhador.nome);
printf("indique o sexo do trabalhador");
trabalhador.sexo=getchar();
printf("indique a idade do trabalhador");
scanf("%d",&trabalhador.idade);
printf("indique o vencimento do trabalhador:");
scanf("%f",&trabalhador.vencimento);

//escrvita da estrutura
printf("\ndados do trabalhador\n");
printf("nome:5s\nsexo:%c\nidade:%d\nvencimento:%f\n",trabalhador.nome,trabalhador.sexo,trabalhador.idade,trabalhador.vencimento);

return 0;
}
