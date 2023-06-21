#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "listaseq.h"

struct lista{
    int quantidade;
    Funcionario dados[TAM];
};

Lista* lista_cria(){
    Lista *l;
    l=(Lista*)malloc(sizeof(Lista));
    if(l!=NULL)
        l->quantidade=0;
    return l;
}

int lista_tamanho(Lista *l){
    return l->quantidade;
}

int lista_cheia(Lista *l){
    if(l->quantidade==TAM)
        return 1; /*verdadeiro*/
    else
        return 0; /*falso*/
}

int lista_vazia(Lista *l){
    if(l->quantidade==0)
        return 1; /*verdadeiro*/
    else
        return 0; /*falso*/
}

int lista_inserir_nofinal(Lista *l, Funcionario f){
    if (lista_cheia(l))
        return 0;
    l->dados[l->quantidade]=f;
    l->quantidade++;
    return 1;
}

int lista_inserir_noinicio(Lista *l, Funcionario f){
	if (lista_cheia(l))
		return 0;
	int i;
	for(i=l->quantidade-1;i>=0;i--)
		l->dados[i+1]=l->dados[i];
	l->dados[0]=f;
	l->quantidade++;
	return 1;
}

int lista_remover_dofinal(Lista *l){
	if(l->quantidade==0)
		return 0;
	else{
		l->quantidade--;
		return 1;
	}
}

int lista_remover_doinicio(Lista *l){
	if(l->quantidade==0)
		return 0;
	else{
		int i;
		for(i=0;i<=l->quantidade-1;i++)
			l->dados[i]=l->dados[i+1];
		l->quantidade--;
		return 1;
	}
}

int lista_busca_sequencial(Lista *l, int chave){
    if(lista_vazia(l)){
       puts("Lista vazia!"); return 0;
    }
    int i =0;
    while (i< l->quantidade){
    	if(l->dados[i].matricula ==chave)
    		return 1; /*verdadeiro*/
    	i++;
    }
    return 0; /*falso*/
}

void lista_imprimir(Lista *l){
	int i =0;
	int t = lista_tamanho(l);
	while (i< t){
		printf("Matrícula= %d, Nome= %s, Salário= %.2f \n",l->dados[i].matricula, l->dados[i].nome, l->dados[i].salario);
		i++;
	}
	printf("\n\n");
}
