#include<stdio.h>

main()
{ 
int A[5],B[5],C[5];
int c;

printf("\n Vetor A");
for(c=0;c<5;c++){
	scanf(" %d",&A[c]);
}
printf("\n Vetor B");
for(c=0;c<5;c++){
    scanf("%d,",&B[c]);
}
for(c=0;c<5;c++){
	C[c]=A[c]*B[c];
}
for(c=0;c<5;c++){
	printf("\n C[%d]:%d", c,C[c]);
}
printf("\nY\nu\nr\ni");
}
