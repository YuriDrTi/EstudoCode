#include<stdio.h>
#include<stdlib.h>
main()
{
	int idade=-1, total, soma, maior, menor=99999;
	float media;
	puts("programa idade");
	do
	{
		printf("\nIdade: "); scanf("%d",&idade);
		if (idade>0)
		{
			total++;
			soma +=idade;
			
			if (idade>maior)
			maior = idade;
			if (idade<menor)
			menor = idade; 
		}
	 } while(idade !=0);
	 media = soma / total;
	 printf("\nNumero depessoas: %d",total);
	 printf("\nNumero Media: %.1f",media);
	 printf("\nNumero menor: %d",menor);
	 printf("\nNumero maior: %d",maior);
}
