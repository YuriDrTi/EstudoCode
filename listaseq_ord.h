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

int lista_inserir_posicao_especif(Lista *l, Funcionario f, int posicao);
void lista_ordenacao(Lista *l);
int lista_inserir_ordenando(Lista *l, Funcionario f);
int lista_busca_sequencial(Lista *l, int chave);
int lista_busca_binaria(Lista *l, int chave);
int lista_remover_posicao_especif(Lista *l, int posicao);
void lista_imprimir(Lista *l);

