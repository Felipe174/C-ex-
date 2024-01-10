/*
Este é um exemplo completo e comentado que utiliza listas ligadas simples.

Para o exemplo, é considerada uma struct com o nome e nota de exame de um aluno */

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
/* Apontador OBRIGATÓRIO para o início da lista ligada
O apontador deve ser inicializado com NULL porque quando o programa começa a 
executar a lista está vazia, ou seja, não existe início da lista. 
Sempre que a lista estiver vazia, o apontador início deve ter o valor NULL */


/******************************************************************************
Esta função insere um elemento no início da lista ligada.
Temos de considerar duas situações: 
      - a lista não tem nenhum aluno;
      - a lista já tem alunos.
******************************************************************************/

void inserir_elemento_inicio() {
     struct aluno *apt ; // apontador para o novo aluno

     // alocar a memória dinâmica para o novo aluno     
     apt = (struct aluno *)malloc(sizeof(struct aluno)) ; 

     // leitura dos dados
     printf("Nome do aluno: ") ;
     do { gets(apt->nome); } while (strcmp(apt->nome, "") == 0) ;
     printf("Nota de exame: ") ;
     scanf("%d", &apt->nota_exame) ;
     
     // atribuição dos apontadores
     apt->seg = inicio ;
     inicio = apt ;
     }
     
/******************************************************************************
Esta função insere um elemento no fim da lista ligada.
Temos de considerar duas situações: 
      - a lista não tem nenhum aluno;
      - a lista já tem alunos.
******************************************************************************/

void inserir_elemento_fim() {
     struct aluno *apt ; // apontador para o novo aluno
     struct aluno *p ;

     // alocar a memória dinâmica para o novo aluno     
     apt = (struct aluno *)malloc(sizeof(struct aluno)) ; 

     // leitura dos dados
     printf("Nome do aluno: ") ;
     do { gets(apt->nome); } while (strcmp(apt->nome, "") == 0) ;
     printf("Nota de exame: ") ;
     scanf("%d", &apt->nota_exame) ;
     
     // como apt será o último aluno da lista, o seu apontador será NULL
     apt->seg = NULL ; 
     
     if (inicio == NULL) { // se a lista está vazia
        inicio = apt ; // se a lista está vazia, apt é o primeiro elemento
     } else {
         // procura do fim da lista
         p = inicio ;
         while (p->seg != NULL)
               p = p->seg ;
         // atribuição do apontador
         p->seg = apt ;
         }
     }
     

/******************************************************************************
Esta função remove um elemento no início da lista ligada.
Temos de considerar duas situações: 
      - a lista não tem nenhum aluno;
      - a lista tem apenas um aluno;
      - a lista tem vários alunos.
******************************************************************************/

void remover_elemento_inicio() {
     struct aluno *p, *q ;
     if (inicio != NULL) { // se a lista não está vazia
        p = inicio ; // p aponta para o 1º aluno da lista
        q = p->seg ; // q vai apontar para o 2º aluno da lista
        free(p) ; // liberta o elemento que vai ser removido
        inicio = q ; // o 2º elemento passa a ser o 1º
     }
     else
         printf("\nNao existem elementos para remover!\n") ;
     }
                           
/******************************************************************************
Esta função remove um elemento no fim da lista ligada.
Temos de considerar duas situações: 
      - a lista não tem nenhum aluno;
      - a lista tem apenas um aluno;
      - a lista tem vários alunos.
******************************************************************************/

void remover_elemento_fim() {
     struct aluno *p, *q ;
     if (inicio != NULL){ // se a lista não está vazia
        /* A ideia é ter p a apontar para um aluno e q para o seguinte, de
        forma a que, quando q chegar ao fim da lista, saibamos quem é o penúltimo
        aluno. */
        p = inicio ; 
        if (p->seg != NULL) { // se a lista só tem um aluno, não existe penúltimo
        	q = p->seg ; // q aponta para o seguinte de p
    		while (q->seg != NULL) { // percorre a lista até encontrar o fim
            	p = p->seg ;
            	q = p->seg ;
            }
           p->seg = NULL ; // p passa a ser o último aluno da lista
           free(q) ; // liberta o último elemento
           }
        else { // se a lista só tiver um elemento, vai ficar vazia
            free(p) ; // remove o elemento
            inicio = NULL ; // a lista está vazia
        }
    }
     else
         printf("\nNão existem elementos para remover!\n") ;
     }

/******************************************************************************
Esta função imprime todos os alunos da lista ligada.
Sabemos que chegamos ao fim da lista quando o apontador da estrutura aluno
tem o valor NULL.
*******************************************************************************/

void imprimir_lista() {
     struct aluno *p ;
     
     p = inicio ; // Para percorrer a lista, devemos começar pelo apontador inicio
     
     // ciclo para percorrer a lista
     while (p != NULL) {
           printf("Nome do aluno -> %s\n", p->nome) ;
           printf("Nota de exame -> %d\n", p->nota_exame) ;
           p = p->seg ; // passa para o próximo aluno da lista
    }
}
     
/******************************************************************************
Esta função procura um aluno na lista e devolve a nota de exame.
Se o aluno não for encontrado, devolve o valor -1.
*******************************************************************************/

int procurar_lista(char *str) {
    struct aluno *p ;
    p = inicio ; // Para percorrer a lista, devemos começar pelo apontador inicio
     
     // ciclo para percorrer a lista
     while (p != NULL) {
           if (strcmp(p->nome, str) == 0) // se encontrar o nome...
              return p->nota_exame ; // devolve a nota de exame
           p = p->seg ;
     }
     return -1 ; // se não encontrou o nome, devolve -1
}
              
/******************************************************************************
Esta função devolve o número de alunos da lista ligada.
*******************************************************************************/

int numero_alunos() {
    int contar_alunos = 0 ;
    struct aluno *p ;
    p = inicio ; // Para percorrer a lista, devemos começar pelo apontador inicio
     
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
       printf("\n --- GESTÃO DE UMA LISTA LIGADA --- \n") ;
       printf("1 - Inserir um aluno no início da lista\n") ;
       printf("2 - Inserir um aluno no fim da lista\n") ;
       printf("3 - Remover um aluno do início da lista\n") ;
       printf("4 - Remover um aluno do fim da lista\n") ;
       printf("5 - Procurar um aluno\n") ;
       printf("6 - Imprimir o número de alunos da lista\n") ;
       printf("7 - Imprimir a lista de alunos\n") ;
       printf("0 - Sair da aplicação\n") ;
       printf("\nOpção: ") ;
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
                      printf("O aluno não foi encontrado!") ;
                   else
                       printf("\nNota de exame -> %d\n", n) ;
                   break ;
              case 6: printf("\nNúmero de alunos: %d\n", numero_alunos()) ; break ;
              case 7: imprimir_lista() ; break ;
              case 0: break ;
              default: printf("Opção inválida!!!\n") ;
		}
		printf("\n\n");
       system("pause") ;
    } 
    
    return 0 ;
}
