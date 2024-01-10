#include<stdio.h>
#include<locale.h>
#include <stdlib.h>
#include <string.h>
int main() {
	
	setlocale(LC_ALL, "portuguese") ;
	
	char nome[16] ;
	printf("qual seu nome?") ;
	gets(nome) ;
	if (strcmp(nome, "felipe"))	{
		printf("a");
	} 
	else {
		printf("b") ;
	} 
 
 return 0 ;
}
