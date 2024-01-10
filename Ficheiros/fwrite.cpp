#include<stdio.h>
#include<locale.h>
#include<string.h>

struct aluno{
	char nome[50] ;
	char morada[80];
	int idade;
};
struct aluno al;

int main(){
	setlocale(LC_ALL,"portuguese");
	FILE *ficheiro;
	
ficheiro=fopen("alunos.dat","ab");
printf("indique o nome: ");
gets(al.nome);
printf("indique a morada: ");
gets(al.morada);
printf("indique a idade: ");
scanf("%d",&al.idade);
//escrita do ficheiro
fwrite(&al, sizeof(struct aluno),1,ficheiro);
fclose(ficheiro);

ficheiro=fopen("alunos.dat","rb");
while(!feof(ficheiro)){ //feof- fim de ficheiro
	fread(&al, sizeof(struct aluno), 1, ficheiro);
	printf("\nNome: %s",al.nome);
	printf("\nMorada: %s",al.morada);
	printf("\nIdade: %d",al.idade);
}

	return 0;
}
