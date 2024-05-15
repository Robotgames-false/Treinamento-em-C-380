#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //Para decimais, tamanho de campo a esquerda
    printf("%15d %16d %12d %19d \n", 20, 30, 40, 50);
    
    //Pra de decimais tamamnho de campo a direita
    printf("-12d %-15d %-16d", 20, 60, 10);
    

  
  system("PAUSE");	
  return 0;
}
