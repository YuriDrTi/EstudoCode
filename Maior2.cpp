#include<stdio.h>
#include<stdlib.h>
int MAIOR(int a,int b){
	return ((a)>b ? -(a):(b));
}

int main(void){
	int a,b;
printf("De dois numeros");
scanf("%d",&a);
scanf("%d",&b);
printf("O maior valor: %d\n\n",MAIOR(a,b));
return 0;
}
