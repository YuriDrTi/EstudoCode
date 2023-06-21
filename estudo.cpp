#include<stdio.h>
#include<stdlib.h>

int a, b;

int maior()
{
	if(a>b)
	   return a;
	else
	return b;
}

main(){
	printf("numero 1: "); scanf("%d",&a);
	printf("numero 2: "); scanf("%d",&b);
	printf("maior: %d", maior());
}
