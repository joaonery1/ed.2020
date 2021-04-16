#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Uma sequência de 45 inteiros representando as matrículas dos alunos cursando
//a disciplina de Programação II, seguida de uma sequência de 30 inteiros
//representando as matrículas dos alunos que cursam a disciplina de Programação III.
void Ordenacao (int vet[],int tamanho){ //funcao para ordenacao do array 
    int cont, i ,j,aux;
    for (j=tamanho-1;j>=1;j--)
    {
        for (int i = 0; i <j; i++)
        {
            if (vet[i]>vet[i+1])
            {
                aux = vet[i];
                    vet[i]= vet[i+1];
                    vet[i+1]=aux;
            }
            
        }
        
    }
   
}


int main(void)
{

    int prog2[45], prog3[30], aux, contador; //incializacao das variaveis

    for (int i = 0; i < 45; i++) //leitura da progamacao2
    {
        scanf("%d", &prog2[i]);
    }
    for (int i = 0; i < 30; i++) //leitura da programacao 3
    {
        scanf("%d", &prog3[i]);
    }
   // Ordenacao(prog2,45);     //funcao para ordenar programacao2
   //Ordenacao(prog3,30);     //funcao para ordenar programacao3

    for (int i = 0; i < 45; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            if (prog3[j] == prog2[i]) //passei um laco nos for e caso um for igual ao outro ele printa
                                      //como ja estao ordenados, nao precisei fazer a ordenacao no final
            {
                printf("%d ", prog2[i]);                       
            }
        }
    }
}
//achei que tivesse que ordenar, nao vi a saída direito.. 
//tinha feito o for para o 30 e dps para o de 45