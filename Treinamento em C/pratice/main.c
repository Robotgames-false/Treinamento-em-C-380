#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    
  int number1, number2, number3, number4, number5,number9, number10, number11, number12, number13;
  
  float number6, number7, number8;
  
  char H;
  
  number1 = 34;  
  number2 = 54;
  number3 = 64;
  number4 = 74;
  number5 = 84;
  number9 = 83;
  number10 = 12;
  number11 = 29;
  number12 = 67;
  number13 = 33;
  
  number6 = 18.90;
  number7 = 32.76;
  number8 = 89.54;
  
  //Printar inteiro decimal.
  printf("Number one com inteiro decimal: %d\n\n", number1);
  
  //Printar indeiro decimal i
  printf("Number one com inteiro decimal i: %i\n\n", number1);
  
  //Printar com flutuante
  printf("Number four com flutuante: %.3f\n\n", number6);
  
  //Printar com notação cientifica miniscula ou float
  printf("Number two com notação cientifica miniscula ou float: %g \n\n", number2);  
  
  //Printar notação cientifica maiuscula ou float
  printf("Number Oito notação cientifica maiuscula ou float: %G\n\n", number8);
  
  //Printar com notação cientifica minuscula
  printf("Number Onze com notação cientifica minuscula: %e\n\n", number11);
  
  //Printar com notação cientifica maiuscula 
  printf("Number three com notação cientifica maiuscula : %E \n\n", number3); 
  
  //printar com decimal sem sinal
  printf("Number five com decimal sem sinal: %u\n\n", number4);
  
  //printar com ponteiro endereço
  printf("Number six com ponteiro endereço: %p\n\n", number5);
   
  //printar com ponteiro inteiro
  printf("Number Dez ponteiro inteiro: %n\n\n", number6);
  
  //printar com porcentagem
  printf("\n\nPorcentagem: %%\n\n");
  
  //Printa com hexadeciml
  printf("Number Seven com hexadeciml: %xdd\n\n", number7);
  
  //Printar com octal com ddd
  printf("Number Nine com octal: %ddd\n\n", number9);
  
  //Printar com octal com o
  printf("Number Dez com octal com o: %o\n\n", number10);
  
  //printar com hexadecimal minuscula
  printf("Number doze com hexadecimal minuscula %x\n\n", number12);
    
  //printar com hexadecimal maiuscula
  printf("Number doze1 com hexadecimal maiuscula: %X\n\n", number12);
  
  //Printar char
  printf("Message : %c\n\n", H);
  
  
  system("PAUSE");	
  return 0;
}
