#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    /*
    Para usar o comando printf de maneira eficiente em C,
    é importante entender como formatar a saída de acordo com suas necessidades.
    Aqui estão alguns exercícios com diferentes casos de uso do printf, além de alguns exemplos de códigos especiais
    que você pode usar para controlar a formatação.
    */
    int a = 10;
    float b = 5.5;
    double c = 3.141592;
    char d = 'A';
    
    printf("Valor de 'a' (int): %d\n", a);
    printf("Valor de 'b' (float): %.2f\n", c);
    printf("Valor de 'c' (double): %.61f\n", c);
    printf("Valor de 'd' (char): %c\n", d);
    
    //Use diferentes técnicas para controlar o espaçamento e a formatação dos valores.
    int x = 42;
    float y = 3.14;
    
    printf("Valor alinahdo a direita (10 Chars): %d10\n", x);
    printf("Valor alinhado a esquerda de (10 Chars): %-10d\n", x);
    printf("Valor alinhado com zeros (10 caracteres): %010d\n", x);
    printf("float com 2 casas decimais %.2f\n", y);
    printf("float com notation cientf: %e\n", y);
    
    //Trabalhe com códigos especiais para controlar a formatação e caracteres especiais.
    printf("Nova linha: primeira linha\nSegunda linha\n");
    
  
  system("PAUSE");	
  return 0;
}
