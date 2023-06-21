#include<stdio.h>

int fat(int n)
{
	int i=1, res=1;
	while(i<=n){
		res*=i;
		i++;
	}
	return res;
}

main(){
	printf("\n o fat de 5= %d",fat(5));
	printf("\n o fat de 10= %d",fat(10));
}
