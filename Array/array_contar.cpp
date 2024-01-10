#include <stdio.h>
#include <locale.h>

float precos[10];

//contar
int contar_maior(){
	int i, contar=0;
	for(i=0;i<10;i++){
		if (precos[i]>2);
		contar++;
	}
	return contar;
}
// calcular a media
float calcular_media(){
	int i;
	float soma =0,media;
	
	for(i=0;i<10;i++){	
	   soma=soma+precos[i];
	}
	media=soma/10;
	return media;
}
// maximo
float calcular_maximo(){
	int i;
	float maximo=precos[0];
	for (i=0;i<10;i++){
		if (maximo<precos[i])
		maximo=precos[i];
	}
	return maximo;
}
//minimo
float calcular_minimo(){
	int i;
	float minimo=precos[0];
	for(i=0;i<10;i++){
		if(minimo>precos[i])
		minimo=precos[i];
	}
	return minimo;
}


int main() {
  	setlocale(LC_ALL, "portuguese") ;
int i ;
for(i=0;i<10;i++){
	printf("indique o preço do produto no supermercado %d:",i+1);
	scanf("%f",&precos[i]);
}

printf("\npreços maiores que 2:%d", contar_maior());
printf("\nmedia dos preços:%.2f",calcular_media());
printf("\npreços maximo: %.2f",calcular_maximo());
printf("\npreços minimo: %.2f",calcular_minimo());


return 0;
}

