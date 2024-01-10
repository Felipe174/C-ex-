//array multidimensional_1


#include <stdio.h>
#include <locale.h>

#define linha 30
#define coluna 30

//declaração da matriz
int numeros[linha][coluna];

int main(){
	setlocale(LC_ALL,"portuguese");
	int i,j,n,contar;
	
	//leitura da matriz
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			printf("indique um numero:");
			scanf("%d",&numeros[i][j]);
		}
	}
	
	printf("\nindique o numero a procurar:");
	scanf("%d",&n);
	
	contar=0;
		for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			if(n==numeros[i][j])
			contar++;
	    }
	}
	printf("\no numero %d aparece %d vezes",n,contar); 
	
	return 0;	
}


//array multidimensional_2


#include <stdio.h>
#include <locale.h>

#define linha 10
#define coluna 10

//declaração da matriz
float numeros[linha][coluna];

int main(){
	setlocale(LC_ALL,"portuguese");
int i,j;
float soma;
	
//leitura da matriz
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			printf("indique um numero:");
			scanf("%f",&numeros[i][j]);
		}
	}
	
	soma=0;
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			soma=soma+numeros[i][j];
			if(minimo<numeros[i][j])
			minimo=numeros[i][j];
		}
	}
	printf("\na soma dos numeros é %f", soma);
	printf("\no menor numero lido é %f",minimo);
	
	return 0;
}
	
	
//array multdimensional_3


#include <stdio.h>
#include <locale.h>

#define linha 5
#define coluna 9

int valores[linha][coluna] ;

int main () {
	setlocale(LC_ALL,"Portuguese") ;
	int i, j, maximo ;
	float soma, media ;
	
	for (i = 0; i < linha; i++) {
		for (j = 0; j < coluna; j++) {
			printf("Indique um número :") ;
			scanf("%d", &valores[i][j]) ;
		}
	}
	for (i = 0; i < linha; i++) {
		maximo=valores[i][0];
		for(j=0;j<coluna;j++) {
			if(maximo<valores[i][j])
				maximo=valores[i][j] ;
		}
		printf("O máximo da linha %d é %d\n",i+1,maximo) ;
	}
	for (j=0;j<coluna;j++) {
		soma=0;
		for (i=0;i<linha;i++) {
			soma=soma+valores[i][j] ;
		}
		media=soma/coluna ;
		printf("\nA média da coluna %d é %f",j+1,media) ;
	}
	
	return 0 ;
}


//array multdimencional_4


#include <stdio.h>
#include <locale.h>

#define linha 10
#define coluna 7

int atletas[linha][coluna];

int main () {
	setlocale(LC_ALL,"Portuguese") ;
int i, j, maximo ;
float soma, media ;

for (i = 0; i < linha; i++) {
	for (j = 0; j < coluna; j++) {
		printf("Indique os quilometros percorridos:") ;
		scanf("%d", &atletas[i][j]) ;
		}
	}










