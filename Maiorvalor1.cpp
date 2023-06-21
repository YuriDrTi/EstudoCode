#include<stdio.h>
#include<stdlib.h>

#define MAIOR(a,b) ((a)>b ? -(a):(b))

int main(void){
	int a,b;
printf("De dois numeros");
scanf("%d",&a);
scanf("%d",&b);
printf("O maior valor: %d\n\n",a, b, MAIOR(a,b));
return 0;
}
