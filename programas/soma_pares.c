#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercício 9.2: Capture 30 valores do teclado, some os pares


int main() {
    setlocale(LC_NUMERIC, "portuguese");
    /*modo="RELEASE";*/
    printf("\n    ALGORITMO PC 9.2                               x \n");
    printf("\n  '''''''''''''''''''''''''''''''''''''''''''''''''' \n");
    printf("      ALUNO RICARDO                      17/04/2025    \n");
    printf("\n  '''''''''''''''''''''''''''''''''''''''''''''''''' \n");

    int MAXIMO = 3;
    int soma = 0;
    for (int contador = 0; contador < MAXIMO; contador++) {
        int numero;
        printf("\n    Informe um numero: (0,00) [%d] ", contador + 1);
        scanf(" %d", &numero);

        if (numero % 2 == 0) {
            soma += numero;
        }
        printf("  %3d > %d\n", contador + 1, numero);
    }

    printf("\n           ............. %9.d SOMA PARES", soma);
    printf("\n\n  '''''''''''''''''''''''''''''''''''''''''''''''''' \n  FIM DO PROGRAMA");
    return 0;
}


