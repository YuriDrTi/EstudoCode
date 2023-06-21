#include<stdio.h>

main()
{
int A[3][3];
int Soma=0,D=0,c,l;
float Media;
	
for(l=0;l<=3;l++)
 for(c=0;c<=3;c++)
 {
 printf("\nA[%d][%d]",c,l);
 scanf("\n %d",&A[c][l]);
 }
for(l=0;l<=3;l++)
 for(c=0;c<=3;c++)
 {
 if(c==l)
 {
 Soma=Soma+A[c][l];
 D++;
 }
}
Media=Soma/D;
printf("\n Media %f",Media);
printf("\nY\nu\nr\ni");
}



