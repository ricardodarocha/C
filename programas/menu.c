#include <stdio.h>
#include <stdlib.h>

void cabecalho() {

  printf("   CALCULADORA    \n");
  printf("===================\n\n");
}

void print_menu() {
  system("cls");
  cabecalho();
  printf(" 1 - Somar\n");
  printf(" 2 - Subtrair\n");
  printf(" 3 - Multiplicar\n");
  printf(" 4 - Dividir\n");
  printf(" 5 - Sair\n");
}

int main(){
    while (1) {
        print_menu();
        int menu;
        printf("\n Escolha uma opcao: ");
        scanf("%d", &menu );
        double a, b;

        switch (menu) {
         case 5: sair();
           break;

        //switch com varias opcoes
        case 1:
        case 2:
        case 3:
        case 4: {
            printf("\n Infome o valor de A : ");
            scanf("%lf", &a );
            printf(" Infome o valor de B : ");
            scanf("%lf", &b );
            break;
          }
        default: printf("Opcao invalida\n");
        system("pause");

        }

        switch (menu){
          case 1: somar(a, b);
          break;
          case 2: subtrair(a, b);
          break;
          case 3: multiplicar(a, b);
          break;
          case 4: dividir(a, b);
          break;

    };
    }
}

void somar(double a, double b) {
   printf(" > %.2lf + %.2lf = %.2lf\n",  a, b, a + b);
   system("pause");
}

void subtrair(double a, double b) {
   printf(" > %.2lf - %.2lf = %.2lf\n",  a, b, a - b);
   system("pause");
}
void multiplicar(double a, double b) {
   printf(" > %.2lf  * %.2lf = %.2lf\n",  a, b, a * b);
   system("pause");
}
void dividir(double a, double b) {
   if (b == 0) {
      printf("  >  ERRO divisao por zero\n");
      system("pause");
   } else {
     printf(" > %.2lf / %.2lf = %.2lf\n",  a, b, a / b);
     system("pause");
   }

}

void sair() {
   printf(" Obrigado, volte sempre \n");
   exit(0);
}
