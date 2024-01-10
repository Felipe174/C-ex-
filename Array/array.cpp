#include <stdio.h>
#include <locale.h>

//declaração dos arrays
int idade[10];
char estadocivil[10];

int main(){
	setlocale(LC_ALL,"portuguese");
	int i;
	
	//leitura dos arrays
	for(i=0;i<10;i++){
		printf("indique a idade:");
		scanf("%d",&idade[i]);
		getchar();
		printf("indique o estado civil:");
		estadocivil[i]=getchar();
	}
	//escrita do array
	for(i=0;i<10;i++){
		printf("idade: %d\n",idade[i]);
		printf("estado civil:%c\n",estadocivil[i]);
	}
	
	return 0;
	
}
