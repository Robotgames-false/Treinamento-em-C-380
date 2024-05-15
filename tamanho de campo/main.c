#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //Para decimais, tamanho de campo a esquerda.
    printf("%15d %16d %12d %19d \n", 20, 30, 40, 50);
    
    //Pra de decimais tamamnho de campo a direita.
    printf("%-12d %-15d %-16d \n", 20, 60, 10);
    
    //Tamanho de campo pra float a esquerda e ao mesmo tempo com arredondamento.
    printf("%.1f \t %.1f \t %1f \t \n", 49.98, 19.99, 25.66);
    
    //Tamanho de campo pra float a direita e ao mesmo tempo com arredondaemto.
    printf("%-15f %-20f %-10f \n", 39.9, 41.80, 17.17);
    
    //Tamanho de campo pra cadeia de caracteres.
    printf("%12s %20s %17s \n", "Elisio", "Massaqui", "Luamba");
    
    //Combination de todos diferentes tipos de dados.
    printf("Nome: %8s \t Idade: %2d \t Hora: %5f \n", "Elisio Massaqui Luamba", 22, 21.89);
    
    //Tamanho de campo com zeros preenchendo o vazioooo.
    

  
  system("PAUSE");	
  return 0;
}
