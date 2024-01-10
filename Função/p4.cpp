#include <stdio.h>
#include <locale.h>

float a[6];

int main(){
	setlocale(LC_ALL,"portuguese");
	int i,quadrado;

for(i=0;i<6;i++){
	printf("indique um numero real:");
	scanf("%f",&a[i]);
}
for(i=0;i<6;i++){
	quadrado=a[i]*a[i];
	printf("%f",quadrado);
}
	return 0;
}
