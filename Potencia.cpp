#include<stdio.h>
#include<locale.h>

int potencia(int i, int j);

int main(void){
	int i, j;
	printf("Valor de i");
	scanf("%d",&i);
	printf("valor de J");
	scanf("%d",&j);
	printf("resultado %d\n",potencia(i,j));
	return 0;
}
int potencia(int i, int j){
  
    if(j==1){/*olhar essa parte*/
    	printf("%d\n",i);
		return i; 
	}
	else{/*aqui começa a recursividade*/
		printf("%d +",i);
		return i*potencia(i,j-1);/*roda ate j=1 (obiservar (j-1)) */
	}
	
}

