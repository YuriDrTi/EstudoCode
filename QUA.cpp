#include<stdio.h>
#include<stdlib.h>

int QUA(int x,int y, int z){
	return ((x*x)+(y+z));
}

int main(void){
	int x,y,z;
printf("De dois numeros");
scanf("%d",&x);
scanf("%d",&y);
scanf("%d",&z);
printf("O valor: %d\n\n",QUA(x,y,z));
return 0;
}
