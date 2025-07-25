int main() {
  int anterior = 0;
  int atual = 0;
  int proximo = 1;
  int termo = 1;
  printf("%d - %d", termo, atual );
  while (1) {
    anterior = proximo;
    proximo = atual;
    atual = anterior+proximo;
    termo++;
  }
return 0
  };
