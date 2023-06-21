#include<stdio.h>
main()
{
	int n[2][5];
	int l,c;
	for(l=0;l<=1;l++)
	 for(c=0;c<=4;c++)
	 {
		printf("\n Numero [%d][%d] =",l,c);
		scanf("%d",&n[l][c]);
	 } 
	printf("\n ----- Relatorio de Saida ------");
	for(l=0;l<=1;l++)
	 for(c=0;c<=4;c++)
	  printf("\n Numero [%d][%d] = %d",l,c,n[l][c]);
}

