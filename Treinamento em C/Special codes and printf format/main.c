#include <stdio.h>
#include <stdlib.h>

    //Imprima informa��es de uma estrutura ou de uma matriz formatada.
    typedef struct
    { 
     
     char nome[50];
     int idade;
     float altura;       
     
    } Pessoa;

int main(int argc, char *argv[])
{
    
    Pessoa p = {"Joao Silva", 30, 1.75};
    
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d anos\n", p.idade);
    printf("Altura: %.2f metros\n", p.altura);
    
    
    /*
    Para usar o comando printf de maneira eficiente em C,
    � importante entender como formatar a sa�da de acordo com suas necessidades.
    Aqui est�o alguns exerc�cios com diferentes casos de uso do printf, al�m de alguns exemplos de c�digos especiais
    que voc� pode usar para controlar a formata��o.
    */
    int a = 10;
    float b = 5.5;
    double c = 3.141592;
    char d = 'A';
    
    printf("Valor de 'a' (int): %d\n", a);
    printf("Valor de 'b' (float): %.2f\n", c);
    printf("Valor de 'c' (double): %.61f\n", c);
    printf("Valor de 'd' (char): %c\n", d);
    
    //Use diferentes t�cnicas para controlar o espa�amento e a formata��o dos valores.
    int x = 42;
    float y = 3.14;
    
    printf("Valor alinahdo a direita (10 Chars): %d10\n", x);
    printf("Valor alinhado a esquerda de (10 Chars): %-10d\n", x);
    printf("Valor alinhado com zeros (10 caracteres): %010d\n", x);
    printf("float com 2 casas decimais %.2f\n", y);
    printf("float com notation cientf: %e\n", y);
    
    //Trabalhe com c�digos especiais para controlar a formata��o e caracteres especiais.
    printf("Nova linha: primeira linha\nSegunda linha\n");
    printf("Tabulation: \tExemplo de TAB\n");
    printf("Aspas duplas: \"Entre Aspas\"\n");
    printf("Barra Invertida: \\ (para imprimir barra invertida)\n");
    printf("Porcentagem %% (para imprimir um simbolo de porcentagem)\n");
    

    
    
  
  system("PAUSE");	
  return 0;
}
