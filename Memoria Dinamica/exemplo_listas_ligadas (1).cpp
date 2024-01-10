/*
Este � um exemplo completo e comentado que utiliza listas ligadas simples.

Para o exemplo, � considerada uma struct com o nome e nota de exame de um aluno */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct aluno {
       char nome[50] ;
       int nota_exame ;
       struct aluno *seg ; // Apontador para o aluno seguinte da lista ligada.
} ;
       

struct aluno *inicio = NULL ; 
/* Apontador OBRIGAT�RIO para o in�cio da lista ligada
O apontador deve ser inicializado com NULL porque quando o programa come�a a 
executar a lista est� vazia, ou seja, n�o existe in�cio da lista. 
Sempre que a lista estiver vazia, o apontador in�cio deve ter o valor NULL */


/******************************************************************************
Esta fun��o insere um elemento no in�cio da lista ligada.
Temos de considerar duas situa��es: 
      - a lista n�o tem nenhum aluno;
      - a lista j� tem alunos.
******************************************************************************/

void inserir_elemento_inicio() {
     struct aluno *apt ; // apontador para o novo aluno

     // alocar a mem�ria din�mica para o novo aluno     
     apt = (struct aluno *)malloc(sizeof(struct aluno)) ; 

     // leitura dos dados
     printf("Nome do aluno: ") ;
     do { gets(apt->nome); } while (strcmp(apt->nome, "") == 0) ;
     printf("Nota de exame: ") ;
     scanf("%d", &apt->nota_exame) ;
     
     // atribui��o dos apontadores
     apt->seg = inicio ;
     inicio = apt ;
     }
     
/******************************************************************************
Esta fun��o insere um elemento no fim da lista ligada.
Temos de considerar duas situa��es: 
      - a lista n�o tem nenhum aluno;
      - a lista j� tem alunos.
******************************************************************************/

void inserir_elemento_fim() {
     struct aluno *apt ; // apontador para o novo aluno
     struct aluno *p ;

     // alocar a mem�ria din�mica para o novo aluno     
     apt = (struct aluno *)malloc(sizeof(struct aluno)) ; 

     // leitura dos dados
     printf("Nome do aluno: ") ;
     do { gets(apt->nome); } while (strcmp(apt->nome, "") == 0) ;
     printf("Nota de exame: ") ;
     scanf("%d", &apt->nota_exame) ;
     
     // como apt ser� o �ltimo aluno da lista, o seu apontador ser� NULL
     apt->seg = NULL ; 
     
     if (inicio == NULL) { // se a lista est� vazia
        inicio = apt ; // se a lista est� vazia, apt � o primeiro elemento
     } else {
         // procura do fim da lista
         p = inicio ;
         while (p->seg != NULL)
               p = p->seg ;
         // atribui��o do apontador
         p->seg = apt ;
         }
     }
     

/******************************************************************************
Esta fun��o remove um elemento no in�cio da lista ligada.
Temos de considerar duas situa��es: 
      - a lista n�o tem nenhum aluno;
      - a lista tem apenas um aluno;
      - a lista tem v�rios alunos.
******************************************************************************/

void remover_elemento_inicio() {
     struct aluno *p, *q ;
     if (inicio != NULL) { // se a lista n�o est� vazia
        p = inicio ; // p aponta para o 1� aluno da lista
        q = p->seg ; // q vai apontar para o 2� aluno da lista
        free(p) ; // liberta o elemento que vai ser removido
        inicio = q ; // o 2� elemento passa a ser o 1�
     }
     else
         printf("\nNao existem elementos para remover!\n") ;
     }
                           
/******************************************************************************
Esta fun��o remove um elemento no fim da lista ligada.
Temos de considerar duas situa��es: 
      - a lista n�o tem nenhum aluno;
      - a lista tem apenas um aluno;
      - a lista tem v�rios alunos.
******************************************************************************/

void remover_elemento_fim() {
     struct aluno *p, *q ;
     if (inicio != NULL){ // se a lista n�o est� vazia
        /* A ideia � ter p a apontar para um aluno e q para o seguinte, de
        forma a que, quando q chegar ao fim da lista, saibamos quem � o pen�ltimo
        aluno. */
        p = inicio ; 
        if (p->seg != NULL) { // se a lista s� tem um aluno, n�o existe pen�ltimo
        	q = p->seg ; // q aponta para o seguinte de p
    		while (q->seg != NULL) { // percorre a lista at� encontrar o fim
            	p = p->seg ;
            	q = p->seg ;
            }
           p->seg = NULL ; // p passa a ser o �ltimo aluno da lista
           free(q) ; // liberta o �ltimo elemento
           }
        else { // se a lista s� tiver um elemento, vai ficar vazia
            free(p) ; // remove o elemento
            inicio = NULL ; // a lista est� vazia
        }
    }
     else
         printf("\nN�o existem elementos para remover!\n") ;
     }

/******************************************************************************
Esta fun��o imprime todos os alunos da lista ligada.
Sabemos que chegamos ao fim da lista quando o apontador da estrutura aluno
tem o valor NULL.
*******************************************************************************/

void imprimir_lista() {
     struct aluno *p ;
     
     p = inicio ; // Para percorrer a lista, devemos come�ar pelo apontador inicio
     
     // ciclo para percorrer a lista
     while (p != NULL) {
           printf("Nome do aluno -> %s\n", p->nome) ;
           printf("Nota de exame -> %d\n", p->nota_exame) ;
           p = p->seg ; // passa para o pr�ximo aluno da lista
    }
}
     
/******************************************************************************
Esta fun��o procura um aluno na lista e devolve a nota de exame.
Se o aluno n�o for encontrado, devolve o valor -1.
*******************************************************************************/

int procurar_lista(char *str) {
    struct aluno *p ;
    p = inicio ; // Para percorrer a lista, devemos come�ar pelo apontador inicio
     
     // ciclo para percorrer a lista
     while (p != NULL) {
           if (strcmp(p->nome, str) == 0) // se encontrar o nome...
              return p->nota_exame ; // devolve a nota de exame
           p = p->seg ;
     }
     return -1 ; // se n�o encontrou o nome, devolve -1
}
              
/******************************************************************************
Esta fun��o devolve o n�mero de alunos da lista ligada.
*******************************************************************************/

int numero_alunos() {
    int contar_alunos = 0 ;
    struct aluno *p ;
    p = inicio ; // Para percorrer a lista, devemos come�ar pelo apontador inicio
     
     // ciclo para percorrer a lista
	while (p != NULL) {
           contar_alunos++ ;
           p = p->seg ;
    }
	return contar_alunos ;
}


/******************************************************************************/

int main()
    {
    int opcao = -1 ;
    int n ;
    char a[80] ;
    setlocale(LC_ALL, "Portuguese") ;
    while (opcao != 0){
       system("cls") ;
       printf("\n --- GEST�O DE UMA LISTA LIGADA --- \n") ;
       printf("1 - Inserir um aluno no in�cio da lista\n") ;
       printf("2 - Inserir um aluno no fim da lista\n") ;
       printf("3 - Remover um aluno do in�cio da lista\n") ;
       printf("4 - Remover um aluno do fim da lista\n") ;
       printf("5 - Procurar um aluno\n") ;
       printf("6 - Imprimir o n�mero de alunos da lista\n") ;
       printf("7 - Imprimir a lista de alunos\n") ;
       printf("0 - Sair da aplica��o\n") ;
       printf("\nOp��o: ") ;
       scanf("%d", &opcao) ;
       switch (opcao) {
              case 1: inserir_elemento_inicio() ; break ;
              case 2: inserir_elemento_fim() ; break ;
              case 3: remover_elemento_inicio() ; break ;
              case 4: remover_elemento_fim() ; break ;
              case 5: 
                   printf("\nAluno a procurar: ") ;
                   do { gets(a) ; } while (strcmp(a,"")==0) ;
                   n = procurar_lista(a) ;
                   if (n == -1)
                      printf("O aluno n�o foi encontrado!") ;
                   else
                       printf("\nNota de exame -> %d\n", n) ;
                   break ;
              case 6: printf("\nN�mero de alunos: %d\n", numero_alunos()) ; break ;
              case 7: imprimir_lista() ; break ;
              case 0: break ;
              default: printf("Op��o inv�lida!!!\n") ;
		}
		printf("\n\n");
       system("pause") ;
    } 
    
    return 0 ;
}
