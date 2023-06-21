#include <stdio.h>
#include <locale.h>

struct banco_clientes{
int conta;
char nome[20];
char end[50];};
typedef struct banco_clientes banco_clientes;
int main(void){
setlocale(LC_ALL, "Portuguese");
int i;
banco_clientes cliente = {0,"?",0.0};//essa parte e que adiciona valores?\\;
FILE *fp;
fp=fopen("dados.dat","rb+");
if(fp==NULL){
printf("Impossível abrir o arquivo %s!\n","dados.dat");
}
else{
printf("Arquivo %s aberto com sucesso!\n\n","dados.dat");
for(i=0;i<5;i++){
cliente.conta=i;
printf("Digite o nome e o endereço do cliente %d: \n", cliente.conta);
scanf("%s%s",cliente.nome, &cliente.end);
fwrite(&cliente, sizeof(banco_clientes), 1, fp);
}
}
 fclose(fp);
return 0;
}
