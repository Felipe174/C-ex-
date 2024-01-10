#include<stdio.h>
#include<locale.h>
#include<string.h>

//declaração de strings
char nome[50] ;
char morada[100] ;
char copia[150] ;


int main () {
    setlocale(LC_ALL, "Portuguese") ;
int i ;
    
 //Leitura de strings
 printf("Indique o seu nome: ") ;
 gets(nome) ;
 printf("Indique a sua morada: ") ;
 gets(morada) ;
 
 //escrita de strings
 printf("\nOla %s, sua morada é %s\n", nome, morada) ;
 
 // strlen - tamnaho da string
 printf("O seu nome tem %d caracteres\n", strlen(nome)) ;
 
 for (i=0; i < strlen(nome); i++ ) {
     if(nome[i] == 'a') 
     nome[i] == '1' ;
     if(nome[i] == 'e') 
     nome[i] = '2' ;
     if(nome[i] == 'o')
     nome[i] = '3' ;
    }
    printf("\no nome codificado é %s", nome) ;
    
    // comparação de strings
    // if (morada == "Braga") ESTÁ ERRADO!
    //strcmp - compara strings; se são iguais devolve 0
    
    if (strcmp(morada, "Braga") == 0) {
        printf("\nVive em Braga") ;
    } else { 
      printf("\nNão vive em Braga") ;
    }
    
    //copia de strings
    //copia = morada ESTÁ ERRADO!
    //strcpy - copia strings
    strcpy(copia, morada) ;
    printf("\nA morada é %s", copia) ;
    
 
    return 0 ;
}
