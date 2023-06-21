#include<stdio.h>

main()
{
	int M[4][5],l,c,soma,t[4];
	printf("|De coluna e linha|\n");
	for(l=0;l<=3;l++)
	for(c=0;c<=4;c++)
	scanf("%d",&M[l][c]);
	{
	for(l=0;l<=3;l++)
	{
	for(c=0;c<=4;c++)
	soma=soma+M[l][c];
	t[l]=soma;
	soma=0;
	}}
	{
	for(l=0;l<=2;l++)
	printf("%d-",t[l]);}
	printf("%d",t[3]);
	
	
}
