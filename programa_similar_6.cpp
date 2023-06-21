#include <stdio.h>

typedef struct {
        int matri;
        char nome[100];
        float cr;
        float semes;
} Aluno;


#define QUANTIDADE_DE_ALUNOS 3

int main(){
        Aluno_unicarioca[QUANTIDADE_DE_ALUNOS];

        printf("Dados: nome(sem espacos), matricula, CR, Semestre");
        for(int i=0; (i < QUANTIDADE_DE_ALUNOS); i++){
                printf("\nInforme os dados do aluno(%i): ",i+1);
                scanf("%s %i %f %f",alunos[i].nome, &alunos[i].matri,
                        &alunos[i].cr, &alunos[i].semes);
        }

        printf("\nMatricula\tNome\tMedia\n");
        for(int i=0; (i < QUANTIDADE_DE_ALUNOS); i++){
                printf("%i\t%s\t%1.2f\n",alunos[i].matri,alunos[i].nome,
                        alunos[i].cr,alunos[i].semes);
        }

        getchar();
        return 0;
}
