#define TAM 10

typedef struct funcionario{
    int matricula; //usado como chave de cada nó
    char nome[50];
    float salario;
} Funcionario;

typedef struct lista Lista;

Lista* lista_cria();

int lista_tamanho(Lista *l);
int lista_cheia(Lista *l);
int lista_vazia(Lista *l);

int lista_busca_sequencial(Lista *l, int chave);
int lista_inserir_nofinal(Lista *l, Funcionario f);
int lista_inserir_noinicio(Lista *l, Funcionario f);
int lista_remover_dofinal(Lista *l);
int lista_remover_doinicio(Lista *l);
void lista_imprimir(Lista *l);

