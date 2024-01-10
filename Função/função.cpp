#include <stdio.h>
  #include <locale.h>
  
  int dobro(int n){
  	int d;
  	d=n*2;
  	return d;
  }
  
  int main() {
  	setlocale(LC_ALL, "portuguese") ;
  	
int num,dobro_num;
printf("indique um numero:");
scanf("%d", &num);
dobro_num=dobro(num);
printf("o dobro do %d é %d/n",num,dobro_num);
return 0;
}
