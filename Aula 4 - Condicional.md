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
