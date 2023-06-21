#include<stdio.h>
#include<stdlib.h>

main(){
	int A=0, B=1;
	
	for(int i=0;i<3;i++)
	{
		while(A<4)
		{
			A+=3;
		}
		B*=3;
	}
	printf("A=%d\ne\nB=%d",A,B);
}
