#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<stdbool.h>

int main (){
    //declarar vetores de tamanho 10
    int vetor1[10], vetor2[10],vetor3[10];
    //inserir os dados nos vetores
    //vetor 1
    for (int i =0; i<10;i++){
         scanf("%d", &vetor1[i]);
    }
    //vetor 2
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&vetor2[i]);
    }
    //vetor que recebe a soma
    for (int i = 0; i < 10; i++)
    {
        vetor3[i] = vetor1[i]+vetor2[i];
        printf("%d ",vetor3[i]);
    }
    


}