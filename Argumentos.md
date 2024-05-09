# Argumentos em C

Argumentos são valores que você pode passar para funções ou para o programa quando ele é executado. Vamos explorar os dois casos em detalhes:

## Argumentos de Função 🔄

Uma função em C pode receber zero ou mais argumentos. Quando você chama uma função, os argumentos passados para ela são chamados de "argumentos reais", e as variáveis que recebem esses valores dentro da função são "argumentos formais". Veja um exemplo de uma função simples com argumentos:

Neste exemplo, a função soma recebe dois argumentos a e b, que são passados ao chamar a função no main. A função retorna a soma dos argumentos.

```c
#include <stdio.h>

// Função que recebe dois argumentos e retorna sua soma
int soma(int a, int b) {
    return a + b;
}

int main() {
    int resultado = soma(5, 3);  // Passando 5 e 3 como argumentos
    printf("Resultado da soma: %d\n", resultado);

    return 0;
}
```

## Argumentos para o main 💻

Quando você executa um programa em C, pode passar argumentos da linha de comando para a função main. Normalmente, a assinatura do main é:

```c
int main(int argc, char *argv[])
```

argc é o número de argumentos passados para o programa (incluindo o nome do programa).
argv é um array de strings que contém os argumentos.
Vamos ver um exemplo em que usamos argumentos da linha de comando para configurar o comportamento do programa:

```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Por favor, forneça um argumento.\n");
        return 1;
    }

    printf("Você forneceu o argumento: %s\n", argv[1]);

    return 0;
}

```

Neste exemplo, o programa verifica se pelo menos um argumento foi passado. Se houver um argumento, ele é impresso na tela. Se não houver argumentos suficientes, o programa exibe uma mensagem solicitando um argumento.
