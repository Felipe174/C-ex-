#include<stdio.h>
#include<locale.h>
#include<string.h>

//declaração struct
struct automovel{
	char matricula[12];
	char marca[30];
	char modelo[30];
	int ano;
	char cor[20];
	float preco;
};

//declaração do array
struct automovel stand[100];

//variavel que guarda o numero de automoveis do stand
int nveiculos=0;

void menu(){
	printf("\n-stand de automoveis-");
	printf("1-inserir um veiculo\n");
	printf("2-pesquisar por marca\n");
	printf("3-pesquisar do preço\n");
	printf("4-pesquisar por cor\n");
	printf("5-remover um veiculo\n");
	printf("9-sair\n");
	printf("opção: ");
}

void pesquisar_marca(){
	int i;
	char m[30];
	printf("\n-pesquisa por marca-");
	printf("indique a marca a pesquisar:");
	gets(m);
	for(i=0;i<nveiculos;i++){
		if(strcmp(m,stand[i].marca)==0){
			printf("\n-dados do automovel-\n");
			printf("\nmatricula: %s\n",stand[i].matricula);
			printf("\nmarca: %s\n",stand[i].marca);
			printf("\nmodelo: %s\n",stand[i].modelo);
			printf("\nano: %d\n",stand[i].ano);
			printf("\ncor: %s\n",stand[i].cor);
			printf("\npreço: %.2f\n",stand[i].preco);
		}
	}
}

void pesquisar_preco(){
	int i;
    float p;
	printf("\n-pesquisa por preço-");
	printf("indique a preço a pesquisar:");
	scanf("%f",&p);
	for(i=0;i<nveiculos;i++){
		if(p>stand[i].preco){
			printf("\n-dados do automovel-\n");
			printf("\nmatricula: %s\n",stand[i].matricula);
			printf("\nmarca: %s\n",stand[i].marca);
			printf("\nmodelo: %s\n",stand[i].modelo);
			printf("\nano: %d\n",stand[i].ano);
			printf("\ncor: %s\n",stand[i].cor);
			printf("\npreço: %.2f\n",stand[i].preco);
		}
	}
}

void pesquisar_cor(){
	int i;
	char c[20];
	printf("\n-pesquisa por cor-");
	printf("indique a cor a pesquisar:");
	gets(c);
	for(i=0;i<nveiculos;i++){
		if(strcmp(c,stand[i].cor)==0){
			printf("\n-dados do automovel-\n");
			printf("\nmatricula: %s\n",stand[i].matricula);
			printf("\nmarca: %s\n",stand[i].marca);
			printf("\nmodelo: %s\n",stand[i].modelo);
			printf("\nano: %d\n",stand[i].ano);
			printf("\ncor: %s\n",stand[i].cor);
			printf("\npreço: %.2f\n",stand[i].preco);
		}
	}
}

void remover_veiculo(){
	int i,j;
	char m[12];
	printf("-remover veiculo-");
	printf("indique a matricula do veiculo a remover: ");
	gets(m);
	for(i=0;i<nveiculos;i++){
			if(strcmp(m,stand[i].matricula)==0){
			for(j=i+1;j<nveiculos;j++)
			stand[j-1]=stand[j];
			printf("\nveiculo removido");
			nveiculos--;	
		}
	}
}

void inserir_veiculo(){
	printf("\n-inserir veiculo-\n");
	printf("matricula: ");
	gets(stand[nveiculos].matricula);
	printf("marca:");
	gets(stand[nveiculos].marca);
	printf("modelo:");
	gets(stand[nveiculos].modelo);
	printf("ano: ");
	scanf("%d",&stand[nveiculos].ano);
	getchar();
	printf("cor: ");
	gets(stand[nveiculos].cor);
	printf("preço: ");
	scanf("%f",&stand[nveiculos].preco);
	nveiculos++; //atualiza o numero de veiculos
}

int main(){
	setlocale(LC_ALL,"portuguese");
	int opcao;
	while(opcao !=9){
		menu();
		scanf("%d",&opcao);
		if(opcao==1)
		inserir_veiculo();
		if(opcao==2)
		pesquisar_marca();
		if(opcao==3)
		pesquisar_preco();
		if(opcao==4)
		pesquisar_cor();
		if(opcao==5)
		remover_veiculo();
		
	}
	return 0;
}

