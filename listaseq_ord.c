#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "listaseq_ord.h"

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

int lista_inserir_posicao_especif(Lista *l, Funcionario f, int posicao){
	if (lista_cheia(l)){
		puts("Lista cheia!"); return 0;/*falso*/}
	if((posicao < 0)||(posicao > TAM-1)){
		puts("Posição inválida!");return 0;/*falso*/}
	if(lista_busca_sequencial(l, posicao-1)){
		puts("Essa chave já existe!");return 0; /*falso*/}
	int i;
	for(i=l->quantidade-1;i>=posicao-1;i--)
		l->dados[i+1]=l->dados[i];
	l->dados[posicao-1]=f;
	l->quantidade++;
	return 1; /*verdadeiro*/
}

void lista_ordenacao(Lista *l){
	int n, i;
	Funcionario aux;

	for(n=1;n<=l->quantidade;n++){
		for(i=0;i<=l->quantidade-1;i++){
			if(l->dados[i].matricula > l->dados[i+1].matricula){
				aux=l->dados[i];
				l->dados[i]=l->dados[i+1];
				l->dados[i+1]=aux;
			}
		}
	}
}

int lista_inserir_ordenando(Lista *l, Funcionario f){
	if (lista_cheia(l)){
		puts("Lista cheia!"); return 0;/*falso*/}
	if (lista_busca_binaria(l, f.matricula)){
		puts("Essa chave já existe!"); return 0;/*falso*/}
	int posicao = l->quantidade-1;
	while((posicao >=0) && (f.matricula < l->dados[posicao].matricula)){
		l->dados[posicao+1]=l->dados[posicao];
		posicao--;
	}
	posicao++;
	l->dados[posicao]=f;
	l->quantidade++;
	return 1;
}


int lista_busca_sequencial(Lista *l, int chave){
    if(lista_vazia(l)){
       puts("Lista vazia!"); return 0; /*falso*/}
    int i =0;
    while (i< l->quantidade){
    	if(l->dados[i].matricula ==chave)
    		return 1; /*verdadeiro*/
    	i++;
    }
    return 0; /*falso*/
}

int lista_busca_binaria(Lista *l, int chave){
	if(lista_vazia(l)){
	   puts("Lista vazia!"); return 0; /*falso*/}
	int meio;
	int inicio=0;
	int fim=l->quantidade-1;
	while(inicio<=fim){
		meio = (inicio+fim)/2;
		if(l->dados[meio].matricula==chave)
			return 1; /*verdadeiro*/
		else{
			if(chave < l->dados[meio].matricula)
				fim=meio-1;
			else
				inicio=meio+1;
		}
	}
	return 0; /*falso*/
}

int lista_remover_posicao_especif(Lista *l, int posicao){
	if (lista_vazia(l)){
			puts("Lista vazia!"); return 0;/*falso*/}
		if((posicao < 0)||(posicao > TAM-1)){
			puts("Posição inválida!");return 0;/*falso*/}
		int i;
		for(i=posicao-1;i<l->quantidade-1;i++)
			l->dados[i]=l->dados[i+1];
		l->quantidade--;
		return 1; /*verdadeiro*/
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
