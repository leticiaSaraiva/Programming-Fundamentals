#include <stdio.h>
#include <string.h>

typedef struct{
	char nome[16];
    int matricula;
    double nota;
    char disciplina[21];
}registro_aluno;
int main(){
	registro_aluno pessoa;
	scanf(" %15[^\n]", pessoa.nome);
	scanf("%d", &pessoa.matricula);
	scanf(" %20[^\n]", pessoa.disciplina);
	scanf("%lf", &pessoa.nota);
	
	printf("Nome = %s \nMatrícula = %d \nDisciplina = %s \nNota = %f \n", pessoa.nome, pessoa.matricula, pessoa.disciplina, pessoa.nota);
	return 0;
}
