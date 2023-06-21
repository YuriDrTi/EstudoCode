#include <stdio.h>
#include <locale.h>
#include "listaencadeada.h" /*inclusão da biblioteca implementada*/

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	//Lista *linicio=NULL;
	//Lista **l=&linicio;

	Lista **l; /*ponteiro para ponteiro, pois eventualmente o valor do ponteiro para o primeiro nó terá que ser
	alterado pelas funções*/
	/*O conteúdo da memória apontada por l terá sempre o endereço do primeiro nó da lista ou NULL se a
	 lista estiver vazia*/

	Funcionario f;
	l = lista_cria();
	if (*l==NULL) /*verifica se a lista foi criada com sucesso*/
	   puts("Lista criada com sucesso!\n");
	int opcao;

	do{ /*Operações disponíveis na estrutura de dados*/
		puts("Inserir na lista                : 1");
		puts("Remover da lista                : 2");
		puts("Buscar na lista                 : 3");
		puts("Imprimir lista                  : 4");
		puts("Ordenar lista                   : 5");
		puts("Informações de um funcionário   : 6");
		puts("Sair                            : -1");
		puts("Qual é a sua escolha?");
		scanf("%d",&opcao);

		switch(opcao){
		case 1:
		   printf("Entre com a matrícula do funcionário: "); scanf("%d",&f.matricula);
		   printf("Entre o nome do funcionário: "); scanf("%s", f.nome);
		   printf("Entre o salário do funcionário: "); scanf("%f", &f.salario);
		   int r;
		   puts("Inserir ordenado                  : 1");
		   puts("inserir no inicio                 : 2");
		   scanf("%d", &r);
		   switch(r){
		   case 1:
			   lista_inserir_ordenando(l, f);
			   lista_imprimir(l);
			   break;
		   case 2:
			   lista_inserir_noinicio(l, f);
			   lista_imprimir(l);
			   break;

		   default: puts("opção inválida");
		   }
		   break;

		case 2:
		   puts("Remover no início                 : 1");
		   puts("Remover no final                  : 2");
		   puts("Remover um funcionário específico : 3");
		   int op;
		   scanf("%d", &op);
		   switch(op){
		   case 1:
			   lista_remover_doinicio(l);
			   lista_imprimir(l);
			   break;
		   case 2:
			   lista_remover_dofinal(l);
			   lista_imprimir(l);
			   break;
		   case 3:
			   printf("Entre com a matrícula do funcionário a ser removido: ");
			   int matricula;
			   scanf("%d",&matricula);
			   lista_remover_elemento_especif(l, matricula);
			   lista_imprimir(l);
			   break;
		   default: puts("opção inválida");
		   }
			break;
		case 3:
			printf("Entre com a matrícula a ser buscada: ");
			int matricula;
			scanf("%d",&matricula);
			lista_busca_sequencial(l, matricula);
			break;
		case 4: lista_imprimir(l); break;
		case 5: /*implementar*/; break;
		case 6: /*implementar*/; break;
		case -1: break;
		default: puts("opção inválida");
		}
	}while(opcao!=-1);
	return 0;
}

