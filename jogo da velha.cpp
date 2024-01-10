/* Jogo do Galo. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char galo1, galo2, galo3, galo4, galo5, galo6, galo7, galo8, galo9 ;

void inicializar_variaveis() {
	galo1 = ' ' ; galo2 = ' ' ; galo3 = ' ' ;
    galo4 = ' ' ; galo5 = ' ' ; galo6 = ' ' ;
    galo7 = ' ' ; galo8 = ' ' ; galo9 = ' ' ;
}

void desenhar_grelha() {
	printf("   |   |   \n") ;
	printf(" %c | %c | %c \n", galo1, galo2, galo3) ;
	printf("   |   |   \n") ;
	printf("___________\n") ;
	printf("   |   |   \n") ;
	printf(" %c | %c | %c \n", galo4, galo5, galo6) ;
	printf("   |   |   \n") ;
	printf("___________\n") ;
	printf("   |   |   \n") ;
	printf(" %c | %c | %c \n", galo7, galo8, galo9) ;
	printf("   |   |   \n") ;
}
     
void registar_jogada(char jogador, int j) {
	if (j == 1) galo1 = jogador ;
	if (j == 2) galo2 = jogador ;
	if (j == 3) galo3 = jogador ;
    if (j == 4) galo4 = jogador ;
    if (j == 5) galo5 = jogador ;
    if (j == 6) galo6 = jogador ;
    if (j == 7) galo7 = jogador ;
    if (j == 8) galo8 = jogador ;
    if (j == 9) galo9 = jogador ;
} 

char verificar_vencedor(){
	//linhas
	if(galo1==galo2 && galo2==galo3 && galo1!= ' ')
	return galo1;
	if(galo4==galo5 && galo5==galo6 && galo4!= ' ')
	return galo4;
	if(galo7==galo8 && galo8==galo9 && galo7!= ' ')
	return galo7;
	
	//colunas
	if(galo1==galo4 && galo4==galo7 && galo1!= ' ')
	return galo1;
	if(galo4==galo5 && galo5==galo8 && galo2!= ' ')
	return galo2;
	if(galo7==galo6 && galo6==galo9 && galo3!= ' ')
	return galo3;
	
	//diagonais
	if(galo1==galo5 && galo5==galo9 && galo1!=' ')
	return galo1;
	if(galo3==galo5 && galo5==galo7 && galo3!= ' ')
	return galo3;
	
	//se não houve vencedor
	return ' ';
}

char alterar_jogador(char jogador){
	if(jogador=='X'){
		retun '0';
	}else{
		return 'X';
	}
}

void mostrar_vencedor(char vencedor) {
    if (vencedor == ' ') {
        printf("\n-------- EMPATE --------\n") ;
        printf("\nVamos jogar outra vez?\n") ;
    } else {
        printf("\n-------- Ganhou o jogador %c --------\n", vencedor) ;
        printf("\nParabéns!!!\n") ;
    }
}


int main() {
	setlocale(LC_ALL, "Po
	rtuguese") ;
	int jogadas = 0 ;
	char vencedor = ' ' ;
	char jogador = 'X' ;
	int j ;

    inicializar_variaveis() ;
    while (vencedor == ' ' && jogadas < 9) {
    	desenhar_grelha() ;
    	printf("\nEscolha a sua jogada: ") ;
    	scanf("%d", &j) ;
		registar_jogada(jogador, j) ;
		vencedor = verificar_vencedor() ;
    	jogadas++ ;
    	jogador = alterar_jogador(jogador) ;
    } 
    desenhar_grelha() ;
    mostrar_vencedor(vencedor) ;

    system("pause") ;
    return 0 ;
}
