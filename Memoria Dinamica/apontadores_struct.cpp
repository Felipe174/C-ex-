#include<stdio.h>
#include<locale.h>
#include<string.h>

struct data{
	int dia;
	char mes[10];
	int ano;
};

struct data *p; //p é um apontador para a struct data

int main(){
	setlocale(LC_ALL,"portuguese");
	
	p=(struct data*)malloc(sizeof(struct data));
	printf("indique o dia: ");
	scanf("%d",&p->dia);
	printf("indique o mes: ");
	gets(p->mes);
	printf("indique o ano: ");
	scanf("%d",&p->ano);
	
	printf("data: %d de %s de %d",p->dia, p->mes,p->ano);
	
	free(p);
	
	return 0;
}
