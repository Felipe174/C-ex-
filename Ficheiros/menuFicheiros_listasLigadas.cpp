#include<stdio.h>
#include<locale.h>
#include<string.h>
#include <stdlib.h>

struct chamada{
	int num_tele;
	char data[20];
	char hora[20];
	struct chamada *seg ;
};
struct chamada *inicio = NULL ; 

int num_cha=0;

void inserir_chamada() {
	 struct chamada *apt ;
	
	  apt = (struct chamada*)malloc(sizeof(struct chamada)) ;
	
	printf("indique o numero de telefone: ");
	scanf("%d",&apt->num_tele);
	printf("data da chamada: ");
	 do { gets(apt->data); } while (strcmp(apt->data, "") == 0) ;
	printf("hora da chamada: ");
	 do { gets(apt->hora); } while (strcmp(apt->hora, "") == 0) ;
	 
	   apt->seg = inicio;
	   inicio = apt ;
	   num_cha++;
}
void mostrar_chamada() {
	struct chamada *p;
	
    p = inicio ;
    
     while (p != NULL) {
	printf("numero de telefone: %d\n",p->num_tele);
	printf("data da chamada: %s\n",p->data);
	printf("horario da chamdada: %s\n",p->hora);
	p = p->seg ;
}
}

int mostrar_num(){
	struct chamada *p;
	int n;
	
	p=inicio;
	
	printf("indique o numero: ");
	scanf("%d",&n);
	
	while (p != NULL) {
	
	 if (p->num_tele == n) {
	 	
	 	printf("data: ",p->data);
	 	printf("hora: ",p->hora);
	 p = p->seg ;
}
    return -1 ;
}

int mostrar_data(){
	struct chamada *p;
	char n[20] ;
	
	p=inicio;
	
	printf("indique a data: ");
	gets(n);
	
while (p != NULL) {

	if (strcmp(p->data, n)==0) {

	 	printf("numero telefone: ",chamada.num_tele);
	 	printf("hora: ",chamada.hora);
	p = p->seg;
}
    return -1 ;
}

int quantidade(){
	int contar=0;
	struct chamada *p;
	p=inicio;
	
	while (p != NULL){
		contar++;
		p=p->seg;
	}
	return contar;
}
	
void menu(){
    printf("1 - inserir uma nova chamada na lista ligada\n") ;
    printf("2 - mostrar todas as chamadas efetuadas\n") ;
    printf("3 - mostrar as chamadas feitas de um número à escolha do utilizador\n") ;
    printf("4 - mostrar as chamadas feitas numa data escolhida pelo utilizador\n") ;
    printf("5 - mostrar a quantidade de chamadas na lista\n") ;
    printf("0 - sair do programa\n") ;
}	
  
int main(){
setlocale(LC_ALL, "Portuguese") ;
int opcao=-1;
FILE *ficheiro;
struct chamada *apt ;

//leitura
if ((ficheiro=fopen("chamada.dat","rb"))!=NULL){
	
while(!feof(ficheiro)){
	apt = (struct chamada*)malloc(sizeof(struct chamada)) ;
	fread(apt,sizeof(struct chamada),1,ficheiro);
	
	if(!feof(ficheiro)) {
		apt->seg = inicio
		inicio = apt ;
		num_cha++
	}
	fclose(ficheiro);
}
}
while (opcao != 0) {
	menu();
 	printf("\nOpção: ") ;
       scanf("%d", &opcao) ;
       switch (opcao) {
        case 1: inserir_chamada() ; break ;
        case 2: mostrar_chamada() ; break ;
        case 3: mostrar_num() ; break ;
        case 4: mostrar_data() ; break ;
        case 5: quantidade() ; break ;	
        case 0: break ;
	}
	
}
        //escrita do array para o ficheiro
    ficheiro=fopen("chamada.dat","wb");
    apt=inicio;
	
	while (apt != NULL){
		fwrite(apt,sizeof(struct chamada),1,ficheiro);
		p=p->seg;
		
		  fclose(ficheiro);
	}
  

return 0;
}

        








