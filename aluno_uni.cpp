#include <stdio.h>
#include <stdlib.h>
struct aluno{
        int matricula;
        char nome[5];
        float cr;
        int semes;
};


int main(void){
        struct aluno aluno_unicarioca;

        aluno_unicarioca.matricula=264859;
        aluno_unicarioca.nome[0]='P';
        aluno_unicarioca.nome[1]='e';
        aluno_unicarioca.nome[2]='d';
        aluno_unicarioca.nome[3]='r';
        aluno_unicarioca.nome[4]='o';
        aluno_unicarioca.cr=7.5;
        aluno_unicarioca.semes=4;

        printf("\nMatricula\tNome\tCR\tsemestre\n");
        printf("%i\t%s\t%.2f\t%i\n",aluno_unicarioca.matricula,aluno_unicarioca.nome,aluno_unicarioca.cr,aluno_unicarioca.semes);
        
        return 0;
}
