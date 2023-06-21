#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
setlocale(LC_ALL, "Portuguese");
char end[50];
FILE *fp;
fp=fopen("dados.dat","w");
if(fp==NULL){
printf("Impossível abrir o arquivo %s!\n","dados.dat");
}
else{
printf("Arquivo %s aberto com sucesso!\n","dados.dat");
printf("Digite seu endreço: ");
scanf(end);
fprintf(fp,"%s",end);
}
fclose(fp);
return 0;
}

