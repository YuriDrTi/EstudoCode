#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
int tamanho, i;
float nota, total;
float *vetor;
printf("Informe numero de avaliações: ");
scanf("%d",&tamanho);
vetor=(float*)calloc(tamanho,sizeof(float));
for(i=0;i<tamanho;i++){
 printf("nota");
 scanf("%f",&nota);
 total+=nota;
}
total=total/tamanho;
printf("%f",total);
free(vetor);
return 0;
}
