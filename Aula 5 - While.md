## Loops

Capture n valores inteiros do teclado até que o usuário digite 0;

Ao término do programa Some os valores e calcule a média;

### WHILE

```C
int valor;
int quantidade = 1;
pritnf("Informe o primeiro valor\n");
scanf("%d", &valor);
int soma = valor;

while (valor != 0) {
  pritnf("Informe o (%d)enésimo valor\n", quantidade++);
  scanf("%d", &valor);
  soma += valor;
}

printf("A soma %d e a media %d", soma, soma / quantidade);

// Notar que a media de inteiros resulta em um valor inteiro
```

### DO WHILE

Use `do while` quando a operação precisa ser informada pelo menos uma vez (Como no exemplo acima)

```C
int valor;
int quantidade = 0;
int soma = 0;

do {
  pritnf("Informe o (%d)enésimo valor\n", quantidade++);
  scanf("%d", &valor);
  soma += valor;
} while (valor != 0);

printf("A soma %d e a media %d", soma, soma / quantidade);

// Notar que a media de inteiros resulta em um valor inteiro
```

### LOOP usando FOR

Use FOR quando o número de iterações for conhecido  
Por exemplo: Crie um programa para imprimir a tabuada do 9;

```C
  for (int i=0; i<10; i++) {
    printf("%d * %d = %d\n", 9, i, 9*i);
  }

```
