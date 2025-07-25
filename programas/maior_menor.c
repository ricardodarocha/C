#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercício 9.1: Capture 30 valores do teclado, calcule a soma, a média e mostre qual é o maior e menor


int main() {
    setlocale(LC_NUMERIC, "portuguese");
    /*modo="RELEASE";*/
    printf("\n    ALGORITMO PC 9.1                               x \n");
    printf("\n  '''''''''''''''''''''''''''''''''''''''''''''''''' \n");
    printf("      ALUNO RICARDO                      17/04/2025    \n");
    printf("\n  '''''''''''''''''''''''''''''''''''''''''''''''''' \n");

    int MAXIMO = 30;
    double maior, menor, numero0, soma;
    printf("\n    Informe um numero: (0,00) [1] ");
    scanf(" %lf", &numero0);
    printf("    1 > %lf\n", numero0);
    menor = numero0;
    maior = numero0;
    soma = numero0;
    for (int contador = 1; contador < MAXIMO; contador++) {
        double numero;
        printf("\n    Informe um numero: (0,00) [%d] ", contador + 1);
        scanf(" %lf", &numero);
        soma += numero;
        printf("  %3d > %lf\n", contador + 1, numero);

        if (numero > maior) {
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }

    }

    printf("\n       ............. %9.3lf MAIOR ", maior);
    printf("\n       ............. %9.3lf MENOR ", menor);
    printf("\n       ............. %9.3lf SOMA ", soma);
    printf("\n       ............. %9.3lf MEDIA (%d)", soma/MAXIMO, MAXIMO);
    printf("\n\n  '''''''''''''''''''''''''''''''''''''''''''''''''' \n  FIM DO PROGRAMA");
    return 0;
}


