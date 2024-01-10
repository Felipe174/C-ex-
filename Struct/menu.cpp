#include <stdio.h>
#include <locale.h>
#include <string.h>
struct produtos {
	char designacao[35] ;
	float preco ;
	int quantidade ;
};
struct produtos stock[8] ;
void menu () {
printf("Gestão de Stocks\n") ;
printf("1 - Vender produto\n") ;
printf("2 - Comprar produto\n") ;
printf("3 - Mostrar produto\n") ;
printf("9 - Sair do programa\n") ;
printf("Escolha uma Opção :") ;	
}
void vender () {
	int numero, venda ;
	printf("Indique o número do produto :") ;
	scanf("%d", &numero) ;
	printf("Indique quantos vendeu :") ;
	scanf("%d", &venda) ;
	stock[numero-1].quantidade = stock[numero-1].quantidade - venda ;
}
void comprar () {
	int numero2, compra ;
	printf("Indique o número do produto :") ;
	scanf("%d", &numero2) ;
	printf("Indique quantos comprou :") ;
	scanf("%d", &compra) ;
	stock[numero2-1].quantidade = stock[numero2-1].quantidade + compra ;
}
void mostrar () {
	int i ;
	float valor = 0 ;
	for (i = 0; i < 8; i++) {
		printf("Designação do produto %d: %s\n", i+1, stock[i].designacao) ;
		printf("Preço do produto %d: %.2f\n", i+1, stock[i].preco) ;
		printf("Quantidade do produto %d: %d\n", i+1, stock[i].quantidade) ;
		valor = stock[i].quantidade * stock[i].preco ;
		printf("Valor do stock %d: %.2f\n", i+1, valor) ;
		valor = 0 ;
	}
}
int main () {
	setlocale(LC_ALL,"Portuguese") ;
	int i, opcao ;
	for (i = 0; i < 8; i++) {
		printf("Indique a designação do produto :") ;
		gets(stock[i].designacao) ;
		printf("Indique o preço do produto :") ;
		scanf("%f", &stock[i].preco) ;
		printf("Indique a quantidade em stock :") ;
		scanf("%d", &stock[i].quantidade) ;
		getchar() ;
	}
	while (opcao != 9) {
		menu() ;
		scanf("%d", &opcao) ;
		if (opcao == 1) {
			vender() ;	
		}
		if (opcao == 2) {
			comprar() ;	
		}
		if (opcao == 3) {
			mostrar() ;	
		}
	}
}
