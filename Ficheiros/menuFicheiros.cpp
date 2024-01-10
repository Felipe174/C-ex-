#include<stdio.h>
#include<locale.h>
#include<string.h>

struct movimento{
int num_conta;
char des_mov[100];
float valor;
};
struct movimento mov[50];

int numMov=0;

void menu(){
	printf("1-inserir um movimento\n");
	printf("2-mostrar todos os movimentos\n");
	printf("3-mostrar os movimentos de uma conta\n");
	printf("0-sair do programa\n");
}

void inserir_mov(){
	printf("insira o numero da conta: ");
	scanf("%d",&mov[numMov].num_conta);
	getchar() ;
	printf("descrição do movimento: ");
	gets(mov[numMov].des_mov);
	printf("indique o valor: ");
	scanf("%f",&mov[numMov].valor);
	numMov++ ;
}

void mostrar_mov(){
	int i;
	for (i = 0; i < numMov; i++) {
	printf("numero de conta: %d\n",mov[i].num_conta);
	printf("descriçaõ de movimento: %s\n",mov[i].des_mov);
	printf("valor: %f\n",mov[i].valor);
}
}

void mostrar_conta(){
	int a,i;
	printf("indique o numero da conta");
	scanf("%d",&a);
	for(i=0;i<numMov;i++){
		if (mov[numMov].num_conta == a){
			printf("numero de conta: %d\n",mov[numMov].num_conta);
	        printf("descriçaõ de movimento: %s\n",mov[numMov].des_mov);
        	printf("valor: %f\n",mov[numMov].valor);		
}
}
}

int main(){
	setlocale(LC_ALL,"portuguese");
FILE *ficheiro;
int opcao=-1,i;

//leitura
if ((ficheiro=fopen("movimento.dat","rb"))!=NULL){
	
while(!feof(ficheiro)){
		fread(&mov[numMov],sizeof(struct movimento),1,ficheiro);
		if(!feof(ficheiro))
		numMov++;
	}
	fclose(ficheiro);
}

while(opcao !=0){
	menu();
	scanf("%d",&opcao);
	if(opcao==1){
		inserir_mov();
}
    if(opcao==2){
    	mostrar_mov();
}
    if(opcao==3){
    	mostrar_conta();
}
 
}
//escrita do array para o ficheiro
    ficheiro=fopen("movimento.dat","ab");
    for(i=0;i<numMov;i++){
    	fwrite(&mov[i],sizeof(struct movimento),1,ficheiro);
	}
    fclose(ficheiro);
return 0;
}













	
