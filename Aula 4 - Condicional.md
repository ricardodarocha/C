```C
    void att4(){
    printf("Capture 3 valores do teclado e informe qual o maior\n");
    int valor1, valor2, valor3;

    printf("Digite o valor um:\n");
    scanf("%d", &valor1);
    printf("Digite o valor dois:\n");
    scanf("%d", &valor2);
    printf("Digite o valor tres:\n");
    scanf("%d", &valor3);

    if(valor1 == valor2 && valor2 == valor3){
        printf("Todos os valores informados sao iguais.");
    }else if(valor1 >= valor2 && valor1 >= valor3){
        printf("O maior valor: %d\n", valor1);
    }else if(valor2 >= valor1 && valor2 >= valor3){
        printf("O maior valor: %d\n", valor2);
    }else{
        printf("O maior valor: %d\n", valor3);
    }

}
```

## Condicional Simples

Possui apenas a cláusula `if`

```C
if (idade > 18) {
  printf("\nMaior de Idade");
}
```

## Condicionais Independentes Se; Se;

Possui vários condicionais, porém cada condicional é independente do outro

```C
if (idade >= 18) {
  printf("\nMaior de Idade");
}

if (saldo == 0) {
  printf("\nMensalidade em atraso");
} 
```

## Condicional Composto (Se-Senão)

Contempla as condições Se Verdadeiro e Se Falso

```C
if (idade >= 18) {
  printf("\nMaior de Idade");
} else {
  printf("\Menor de Idade");
}
```

## Condicional Duplo (Se-Senão-Se)

Possui pelo menos dois condicionais Se

```C
if (idade == 18) {
  printf("\nCompletou a maioridade este ano");
} else {
if (idade > 18) {
  printf("\nMaior de Idade");
} else {
  printf("\Menor de Idade");
}
```

## Condicionais Aninhados (Se { Se {} }

Possui mais de um condicional Se, porém um está dentro do outro, o seja, são dependentes
```C
if (idade > 18) {
    if (habilitado == 1) {
       printf("\nPossui carteira de motorista");
    }
}
```

Esta forma equivale a Se (idade>18) E (habilitado==1)
