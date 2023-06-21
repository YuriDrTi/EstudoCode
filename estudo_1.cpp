#include<stdio.h>
#include<stdlib.h>

void exibir(int a, int b, int c, int d)
{
	printf("%d-%d-%d-%d", a,b,c,d);
	printf("-%d-%d-%d-%d", c,d,a,b);
}
main(){
	int a=1,b=3,c=4,d=2;
	exibir(c,a,b,b);
}
