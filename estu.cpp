#include<stdio.h>
#include<stdlib.h>

main()

{
	int res=1, cont=-2, x=2;
	do
	{
		res=res*x;
		cont++;
	}while(cont<=1);
	printf(" \n%d ",res);
}
