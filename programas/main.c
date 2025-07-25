#include <stdio.h>
#include <stdlib.h>

/* Define as constantes */
int LIMITE = 1000;

// Define os tipos
typedef struct {
    char nome[40];
    char email[50];
    int telefone;
    int cpf;
    } TProfessor;

// Define os vetores
TProfessor professores[1000];

// Define o banco de dados
int registros = 0;

// Define as operacoes do banco de dados
  void incluir_professor(int proximo_codigo) {
    int indice = proximo_codigo -1;
    printf("  \n Professor %d\n", proximo_codigo);
    fflush(stdin);

    printf(" nome: ");
    gets(&professores[indice].nome);

    printf(" email: ");
    gets(&professores[indice].email);

    printf(" telefone: ");
    scanf(" %d", &professores[indice].telefone);

    printf(" cpf: ");
    scanf(" %d", &professores[indice].cpf);

    printf("\n\n professor inserido com sucesso\n");
    imprimir_professor(indice);
    return;
    }

  void pesquisar_professor(int proximo_codigo) {
    int limite = proximo_codigo;

    fflush(stdin);
    printf(" \n Pesquisa Professor\n");
    printf(" Digite o telefone ou cpf \n");
    int busca;
    scanf("%d", &busca);

    for (int i=0;i<limite;i++) {
        if (professores[i].cpf == busca) {
            printf("Professor encontrado  [indice %d]\n", i);
            printf("  cpf ...... %d\n\n", busca);
            imprimir_professor(i);
            break;
        } else
        if (professores[i].telefone == busca) {
            printf("Professor encontrado  [indice %d]%d\n", i);
            printf("  tel ...... %d\n\n", busca);
            imprimir_professor(i);
            break;
        } else {
            printf("Professor nao encontrado\n      termo de busca ...... %d", busca);
        }
    }
    return;
  }

  void imprimir_professor(int indice) {
    if (indice > LIMITE) {
      printf("id fora da capacidade [%d, %d]\n", indice, LIMITE-1);
      return;
    }
    if (indice > registros) {
      printf("indice nao encontrado [%d]\n", indice);
      return;
    }
    if (indice < 0) {
      printf("indice fora do intervalo [0-%d]\n", LIMITE-1);
      return;
    }
    printf("\n");
    printf("   nome  ... %s\n", professores[indice].nome);
    printf("   email ... %s\n", professores[indice].email);
    printf("   tel ..... %d\n", professores[indice].telefone);
    printf("   cpf ..... %d \n", professores[indice].cpf);
    printf("\n");
    return;
  }


// Define as operacoes do programa

// Implementa as operações

int main()
{
    printf("Sistema de banco de dados\n");
    printf("versao 1\n\n");


    while (1) {
        int acao;
        printf("%d registros encontrados\n", registros);
        printf(" Digite 1 para incluir\n");
        printf(" Digite 2 para pesquisar\n");
        printf(" Digite 3 para imprimir\n");
        printf("\n");
        printf(" Digite 0 para sair\n");
        scanf("%d", &acao);

        switch (acao) {
        case 1:
            incluir();
            continue;
        case 2:
            pesquisar();
            continue;
        case 3:
            imprimir();
            continue;
        case 0:
            exit(0);
            continue;
        default:
            printf("Acao invalida");
    }
    return 0;
  }
}

void incluir() {
    registros ++;
    if (registros > LIMITE) {
        printf("O banco de dados esta cheio\n");
        return;
    } else {
        printf("incluindo...\n");
        incluir_professor(registros);
    }
}

void pesquisar() {
    pesquisar_professor(registros + 1);
}

void imprimir() {
    int acao;
    printf("%d registros encontrados\n", registros);
    printf(" Digite 1 para imprimir pelo codigo\n");
    printf(" Digite 2 para pesquisar cpf ou telefone\n");
    printf(" Digite 0 para voltar\n");
    scanf(" %d", &acao);

    switch (acao) {
        case 1: {
            int codigo;
            printf("Digite o codigo para imprimir\n");
            scanf(" %d", &codigo);
            imprimir_professor(codigo);
            break;}
        case 2:
            pesquisar();
            break;
        case 0:
            break;
        default:
            printf("acao invalida\n");
    }
    return;
}
