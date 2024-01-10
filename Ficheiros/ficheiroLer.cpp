#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	FILE *ficheiro;
	char c;
	
//abrir o ficheiro
ficheiro=fopen("exemplo.txt","a+");

while(c!=EOF){
	c=fgetc(ficheiro);
	printf("%c",c);
}
//fechar ficheiro
fclose(ficheiro);
	
	return 0;
}
