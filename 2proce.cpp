#include<stdio.h>
#include<stdlib.h>

int SOMA(int x,int y, int z){
	return x+y+z;
}
int MEDIA(int x,int y,int z){
	return ((x+y+z)/3);
}

int main(void){
	int x,y,z;
printf("De dois numeros");
scanf("%d",&x);
scanf("%d",&y);
scanf("%d",&z);
printf("O soma: %d\n\n",SOMA(x,y,z));
printf("O media: %d\n\n",MEDIA(x,y,z));
return 0;
}
