
typedef struct funcionario{
    int matricula; //usado como chave de cada nó
    char nome[50];
    float salario;
} Funcionario;

typedef struct lista Lista;

Lista** lista_cria();

int lista_tamanho(Lista **l);
int lista_vazia(Lista **l);

int lista_inserir_noinicio(Lista **l, Funcionario f);
void lista_ordenacao(Lista **l);
int lista_inserir_ordenando(Lista **l, Funcionario f);
int lista_busca_sequencial(Lista **l, int chave);
int lista_remover_doinicio(Lista **l);
int lista_remover_dofinal(Lista **l);
int lista_remover_elemento_especif(Lista **l, int chave);
void lista_imprimir(Lista **l);
Funcionario lista_recuperar_inf(Lista **l, int chave);

