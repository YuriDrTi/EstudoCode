#include<stdio.h>

#define MAIOR(a,b) ((a)>b ? -(a):(b))

int main(void){
int a=3, b=5;
printf("O maior valor entre %d e %d �: %d\n\n",a, b, MAIOR(a,b));
return 0;
}


