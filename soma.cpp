/*programa Ola Mundo*/

 #include <stdio.h>
  #include <locale.h>
  
  int main() {
  	setlocale(LC_ALL, "portuguese") ;
  	
int numero1, numero2,soma;
printf("indique o 1 numero: ") ;
scanf("%d", &numero1)  ;
printf("indique o 2 numero: ") ;
scanf("%d", &numero2)  ;
soma = numero1 + numero2 ;
printf("a soma dos numeros é %d", soma) ;

  	return 0 ;

  }
  
