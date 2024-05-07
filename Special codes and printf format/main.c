#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a = 10;
    float b = 5.5;
    double c = 3.141592;
    char d = 'A';
    
    printf("Valor de 'a' (int): %d\n", a);
    printf("Valor de 'b' (float): %.2f\n", c);
    printf("Valor de 'c' (double): %.61f\n", c);
    printf("Valor de 'd' (char): %c\n", d);
  
  system("PAUSE");	
  return 0;
}
