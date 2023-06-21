#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "listaencadeada.h"

struct lista{
    Funcionario dados;
    struct lista *proximo;
};
typedef struct lista No; /* usado quando se referir a um nó da lista*/


Lista** lista_cria(){

    Lista **l=(Lista**)malloc(sizeof(Lista*)); /* alocando um espaço de memória onde ficará o endereço do primeiro nó*/
      if(l!=NULL) /* teste para saber se a alocação ocorreu com sucesso*/
    	  *l=NULL; /* a lista está vazia, então o conteúdo do espaço de memória para onde l está apontando recebe NULL*/
    return l;
}

int lista_tamanho(Lista **l){ /*Implementar*/
	return 0;

}

int lista_vazia(Lista **l){
	if(*l==NULL) /*se o conteúdo de l for NULL então a lista está vazia*/
		return 1;
	return 0;
}

int lista_inserir_noinicio(Lista **l, Funcionario f){

	if(lista_busca_sequencial(l,f.matricula)){ /*chaves já existentes não são inseridas*/
		puts("Essa chave já existe!");return 0; /*falso*/}
	No *novo_no = (No*)malloc(sizeof(No)); /* Memória para um novo nó foi alocado*/
	if(novo_no==NULL) return 0;/* teste para saber se a alocação do no ocorreu com sucesso*/
	novo_no->dados=f; /*O novo nó foi preenchido com as informações do funcionário*/
	novo_no->proximo = *l; /*O novo nó agora aponta para onde o inicio da lista apontava*/
	*l=novo_no; /*O início da lista agora aponta para o novo_no*/
	return 1; /*verdadeiro*/
}

void lista_ordenacao(Lista **l){ /*Implementar*/


}

int lista_inserir_ordenando(Lista **l, Funcionario f){
	if(lista_busca_sequencial(l,f.matricula)){/*chaves já existentes não são inseridas*/
		puts("Essa chave já existe!");return 0; /*falso*/}
	No *novo_no = (No*)malloc(sizeof(No)); /* Memória para um novo nó foi alocado*/
	if(novo_no==NULL) return 0;/* teste para saber se a alocação do no ocorreu com sucesso*/
	novo_no->dados=f; /*O novo nó foi preenchido com as informações do funcionário*/

	No *no_anterior, *no_atual; /*o ponteiro no_anterior serve não perdermos a referência do nó anterior ao no_atual*/
	no_atual=*l; /*no_atual aponta para o primeiro nó da lista*/
	while(no_atual!=NULL && no_atual->dados.matricula < f.matricula){ /*Enquanto não se chega ao final da lista
	e a chave do elmento a ser inserido for maior que a chave do no_atual, faça:*/
		no_anterior = no_atual;/*no_anterior passa ser o no_atual*/
		no_atual=no_atual->proximo;/*no_atual avança pra o próximo nó*/
	}

	if(no_atual==*l){ /*se a lista estiver vazia ou a chave do elemento inserido for menor do que a chave
	do primeiro nó, inserir no inicio da lista*/
		novo_no->proximo = *l;
		*l=novo_no;
	}
	else{
		novo_no->proximo=no_anterior->proximo; /*Fazer o nó novo apontar para onde apontava o anterior dele*/
		no_anterior->proximo=novo_no; /*Fazer o nó anterior apontar para o novo nó*/
	}
	return 1; /*verdadeiro*/
}


int lista_busca_sequencial(Lista **l, int chave){
    if(lista_vazia(l)){
       puts("Lista vazia!"); return 0; /*falso*/}
    No *no_atual = (No*)malloc(sizeof(No));
    if(no_atual==NULL) return 0;/* teste para saber se a alocação do no ocorreu com sucesso*/
    no_atual=*l; /*no_atual aponta para o primeiro da lista*/
    while (no_atual!=NULL){ /*Enquanto não final da lista*/
    	if(no_atual->dados.matricula == chave) return 1; /*se achar a chave retorna 1 (verdadeiro)*/
		no_atual=no_atual->proximo; /*no_atual ponta para o próximo*/
	}
    return 0; /*falso - não encontrou o elemento*/
}

int lista_remover_doinicio(Lista **l){
	if(lista_vazia(l)){
	   puts("Lista vazia!"); return 0; /*falso*/}
	No *no_inicial=*l; /* cria um ponteiro para receber o endereço do nó inicial que está em *l*/
	*l=no_inicial->proximo;/* faz o início apontar para o próximo do nó inicial*/
	free(no_inicial); /*liberar o espaço de memória apontado por no_inicial*/

	return 1; /*verdadeiro*/
}
int lista_remover_dofinal(Lista **l){
	if(lista_vazia(l)){
	   puts("Lista vazia!"); return 0; /*falso*/}
	No *no_anterior, *no_atual=*l; /*no_atual começará do primeiro nó da lista*/
	while(no_atual->proximo != NULL){
		no_anterior = no_atual; /*Será necessário ter o endereço do nó anterior quando for encontrado o último nó*/
		no_atual = no_atual->proximo; /*Obten-se o endereço do próximo nó*/
	}
	if(no_atual == *l) /*A lista só tinha o primeiro nó*/
		*l=no_atual->proximo; /*Faz o início apontar para NULL*/
	else  /*A lista tinha mais de um nó*/
		no_anterior->proximo = no_atual->proximo; /*Faz o penúltimo nó apontar para NULL*/

	free(no_atual); /*liberar o espaço de memória apontado por no_atual*/
	return 1;
}

int lista_remover_elemento_especif(Lista **l, int chave){
	if(lista_vazia(l)){
	   puts("Lista vazia!"); return 0; /*falso*/}
	if(!lista_busca_sequencial(l,chave)){
		puts("Essa chave NÃO existe!");return 0; /*falso*/}
	No *no_anterior, *no_atual;
	no_atual=*l; /*no_atual aponta para o primeiro da lista*/
	while(no_atual != NULL && no_atual->dados.matricula != chave){ /*Enquanto não final da lista e não acha o elemento*/
		no_anterior = no_atual; /*no_anterior aponta para o no_atual*/
		no_atual = no_atual->proximo; /*no_atual aponta para o próximo da lista*/
	}
	if(no_atual==*l) /*a lista só tem um elmento*/
		*l = no_atual->proximo;
	else
		no_anterior->proximo = no_atual->proximo; /*no_anterio passa apontar para o próximo de no_atual*/
	free(no_atual); /*libera a memória*/
	return 1;
}

void lista_imprimir(Lista **l){
	if(*l==NULL)
		puts("Lista vazia");
	else{
		No *no_atual= (No*)malloc(sizeof(No));
		no_atual=*l; /*no_atual aponta para o primeiro da lista*/
		while (no_atual!=NULL){
			printf("Matrícula= %d, Nome= %s, Salário= %.2f \n",no_atual->dados.matricula, no_atual->dados.nome, no_atual->dados.salario);
			no_atual=no_atual->proximo;
		}
	}

}

Funcionario lista_recuperar_inf(Lista **l, int chave){ /*Implementar*/
Funcionario f={0," ",0.0};

return f;
}



