#include<stdio.h>
#include<string.h>

main()
{
	struct ficha
	{
		char sexo,curso;
		int ida;
	};
	struct ficha aluno[5];
	int c,am=0,amn=0,af=0;
	float pf; 
	
	for(c=0;c<5;c++){
	printf("Sexo?M ou F.\n");
	scanf(" %c",&aluno[c].sexo);
	printf("Idade?\n");
	scanf("%d",&aluno[c].ida);
	printf("Opiniao? S ou N.\n");
	scanf(" %c",&aluno[c].curso);
    }
    for(c=0;c<5;c++)
    {
    	if(aluno[c].sexo == 'm')
    	am++;
    	if((aluno[c].ida < '23') && (aluno[c].curso == 'n'))
    	amn++;
    	else 
    	af++;
	}
	pf=af*100/5;
	printf("\nHomens %d ",am);
	printf("\nHomens de 23 insatifeitos %d",amn);
	printf("\nMulheres %d",af);
	printf("\nPorcentual feminino %d",pf);
	
}
