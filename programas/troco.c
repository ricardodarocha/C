#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_NUMERIC, "portuguese");
    char modo[20]="DEBUG";
    /*modo="RELEASE";*/
    printf("\n  SISTEMA DE TROCO  PC 9.4                         x \n");
    printf("\n  '''''''''''''''''''''''''''''''''''''''''''''''''' \n");
    printf("\n   MMP\"\"MM\"\"YMM");
    printf("\n   '    MM    ");
    printf("\n        MM  `7Mb,od8 ,pW\"Wq.   ,p6\"bo   ,pW\"Wq.");
    printf("\n        MM    MM' \"'6W'   `Wb 6M'  OO  6W'   `Wb");
    printf("\n        MM    MM    8M     M8 8M       8M     M8");
    printf("\n        MM    MM    YA.   ,A9 YM.    , YA.   ,A9");
    printf("\n      .JMML..JMML.   `Ybmd9'   YMbmd'   `Ybmd9'\n\n\n");

    printf("\n  '''''''''''''''''''''''''''''''''''''''''''''''''' \n");
    printf("      ricardodarocha@outlook.com  vs abr/2025 \n");
    printf("\n  '''''''''''''''''''''''''''''''''''''''''''''''''' \n");
    float valorFloat, valorPedido, valorPagamento;
    int notas, moedas;
    int notasDisponiveis[5] = {50, 20, 10, 5, 2};
    int moedasDisponiveis[6] = {100, 50, 25, 10, 5, 1};

    while (1) {
        int valorCentavos;
        printf("\n\n    Informe o valor do pedido (R$ 0,00) R$ ");
        scanf(" %f", &valorPedido);
        if (valorPedido == 0) {
            break;
        }

        printf("\n    Informe o valor pago (R$ 0,00) R$ ");
        scanf(" %f", &valorPagamento);
        if (valorPagamento == 0) {
            continue;
        }

        valorFloat = valorPagamento - valorPedido;

        if (valorFloat > 0.0) {
            //calcula o troco
            valorCentavos = (int)(valorFloat * 100);
            printf("\n     %.2f - %.2f   TROCO: %f  .2 \n", valorPagamento, valorPedido, valorFloat);

            //Primeiro percorre todas as notas disponíveis
            for (int i = 0; i < 5; i++) {
                if (modo=="DEBUG") {
                        printf("\n %d", valorCentavos);
                }

                int notaAtual = notasDisponiveis[i];
                if (valorCentavos >= notaAtual) {
                    notas = valorCentavos / (notaAtual * 100);
                    /*resto = valorCentavos % (notaAtual * 100);*/
                    valorCentavos = valorCentavos % (notaAtual * 100);
                    if (notas > 0) {
                        printf("\n       .............R$ %2d,00 | %4d", notaAtual, notas);
                    }
                    if (valorCentavos == 0) {
                        break;
                    }
                } else {
                    continue;
                };
            }

            //Percorre todas as moedas disponíveis
            for (int i=0; i<6; i++) {

                int moedaAtual = moedasDisponiveis[i];
                if (valorCentavos >= moedaAtual) {
                    moedas = valorCentavos / (moedaAtual);
                    /*resto = valorCentavos % (moedaAtual);*/
                    valorCentavos = valorCentavos % moedaAtual;
                    if (moedas > 0) {
                        if (moedaAtual >= 100) {
                            printf("\n       .............R$ %2d,00 | %4d", moedaAtual / 100, moedas);
                        }  else  {
                            printf("\n       .............R$  0,%02d | %4d", moedaAtual, moedas);
                        }
                    }
                    if (valorCentavos == 0) {
                        break;
                    }
                } else {
                    continue;
                };
            }

            // Exibe resultados
        } else {
            printf("    Pagamento menor que o valor do pedido\n\Dívida restante: %.2f", -valorFloat);
        }

    printf("\n\n\n  '''''''''''''''''''''''''''''''''''''''''''''''''' \n");
    }
    printf("\n  '''''''''''''''''''''''''''''''''''''''''''''''''' \n");
    return 0;
}

/*
Casos de Teste

Caso1            > 46,83 > 100,00 > 53,17
R$  53,17 | 50   = 1
     3.17 |  2   = 1
     1.17 |  1   = 1
     0.17 | 0.10 = 1
     0.07 | 0.05 = 1
     0.02 | 0.01 = 2

Caso2            > 620,03 > 1000,00 > 379,97
R$ 379,97 |  50  = 7
    79.97 |  20  = 1
     9.97 |   5  = 1
     4.97 |   2  = 2
     0.99 | 0.50 = 1
     0.49 | 0.25 = 1
     0.21 | 0.10 = 2
     0.01 | 0.01 = 1

Caso4            > 590,27 > 1000 > 409,73
R $409,73 | 100  = 4
     9.73 |   5  = 1
     4.73 |   2  = 2
     0.73 | 0.50 = 1
     0.23 | 0.10 = 2
     0.03 | 0.10 = 0

Caso5
R$ 557,13 | 100 = 5
    57.13 |  50 = 1
     7.13 |  5 = 1
     2.13 |  2 = 1
     0.13 | 0.10 = 1
     0.03 | 0.10 = 0

Caso6            > 2,01 > 1000 997,99
R$ 997,99 | 100  = 9
    97.99 |  50  = 1
    47.99 |  20  = 2
     7.99 |   5  = 1
     2.99 |   2  = 1
     0.99 | 0.50 = 1
     0.49 | 0.25 = 1
     0.24 | 0.10 = 2
     0.04 | 0.10 = 0

*/
