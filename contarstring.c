#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{

  char texto[50];      //char para armazenar o texto/frase escrita pelo usuario
  int cout = 0;        //variiavel de contagem com inicio 0
  char letra[]= "aA" ; //array para armazenar as letras que queremos ler

  gets(texto); //leitura de string

  for (int i = 0; i < strlen(texto); i++)  //loop para fazer contar as letras
  {
    for (int j = 0; j < strlen(letra); j++) //loop contagem 
    {
        if (texto[i]==letra[j])
        {
          cout++;         //variavel de contagem 
        }
        
    }
    
  }

  printf("%d",cout); //saida
  


  
}