#include <stdio.h>
#include <locale.h>

//variaveis globais
int sala1=0,sala2=0,sala3=0;

void atualizar_sala (int numsala,int numbilhetes) {
	if(numsala==1){
		sala1=sala1+numbilhetes;
	}
		if(numsala==2){
		sala2=sala2+numbilhetes;
	}
		if(numsala==3){
		sala3=sala3+numbilhetes;
	}
}

void reiniciar_sala(int numsala){
	if(numsala==1){
		sala1=0;
	}
	if(numsala==2){
		sala1=0;
	}
	if(numsala==3){
		sala1=0;
	}
}

void mostrarbilhetes(){
	float perc1,perc2,perc3;
	printf("-------------------------------\n");
	printf("-      ocupação das salas     -\n");
	printf("-------------------------------\n");
	printf("numero de bilhetes vendidos na sala 1: %d\n",sala1);
     	perc1=sala1/120.0*100;
	printf("percentagem de ocupação - sala1:%.1f\n",perc1);
	printf("numero de bilhetes vendidos na sala 2: %d\n",sala2);
    	 perc2=sala2/85.0*100;
	printf("percentagem de ocupação - sala2:%.1f\n",perc2);
	printf("numero de bilhetes vendidos na sala 3: %d\n",sala2);
  	    perc3=sala3/85.0*100;
	printf("percentagem de ocupação - sala3:%.1f\n",perc3);

}

void menu(){
	printf("---------------------------\n");
	printf("-      sala de cinema     -\n");
	printf("---------------------------\n");
	printf("1- atualizar numero de bilhetes da sala.\n");
	printf("2- colocar o numero de bilhetes de uma sala a 0.\n");
    printf("3- mostra o numero de bilhetes vendidos em cada sala.\n");
	printf("0- sair do programa.\n");
	printf("opção:");
}

int main () {
	setlocale(LC_ALL, "portuguese") ;
	int opcao=1,ns,nb;
	while(opcao !=0){
	menu();
	scanf("%d",&opcao);
	if(opcao==1){
		printf("indique a sala:");
		scanf("%d",&ns);
		printf("indique o numero de bilhetes vendidos:");
		scanf("%d",&nb);
		atualizar_sala(ns,nb);
	}
	if(opcao==2){
		printf("indique a sala:");
		scanf("%d",&ns);
		reiniciar_sala(ns);
	}
	if(opcao==3){
		mostrarbilhetes();
	}

}
return 0;
}
