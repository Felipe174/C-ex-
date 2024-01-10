#include<stdio.h>
#include<locale.h>

int numeros[8]={13,7,15,10,12,20,2,1};

int main(){
	setlocale(LC_ALL,"portuguese");
	int i,j,aux;
	
	//ordenação crescente
	for (i=0;i<7;i++){
		for(j=i+1;j<8;j++){
			if(numeros[i]>numeros[j]){
				aux=numeros[i];
				numeros[i]=numeros[j];
				numeros[j]=aux;
			}
		}		
	}
	for(i=0;i<8;i++){
		printf("%d\n",numeros[i]);
	}
	
	return 0;
}
