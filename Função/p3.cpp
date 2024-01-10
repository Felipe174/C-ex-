#include <stdio.h>
#include <locale.h>

char a[15];

int main(){
	setlocale(LC_ALL,"portuguese");
	char i;

for(i=0;i<15;i++){
	printf("indique um caracter:");
	a[i]=getchar();
	getchar();
}
	for(i=0;i<15;i++){
		printf("%c",a[i]);
}
	return 0;	
}
