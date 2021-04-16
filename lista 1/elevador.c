#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<stdbool.h>


//A primeira linha da entrada contém dois inteiros N e C, 
//indicando o número de leituras realizadas pelo sensor e a
//capacidade máxima do elevador, respectivamente (1 <= N <= 1000 e 1 <= C <= 1000).
//As N linhas seguintes contêm, cada uma, uma leitura do sensor.
//Cada uma dessas linhas contém dois inteiros S e E, indicando quantas pessoas 
//saíram e quantas pessoas entraram naquele andar, 
//respectivamente (0 <= S <= 1000 e 0 <= E <= 1000).

int main (void){
    int n,c;
    //n = numero de leituras 
    //c = capacidade maxima do elevador
    int sair,entrou;
    int maxi =0;
    int contador;
    //maxi = maximo suportado
    //contador = recebe os valores de quem entoru e saiu



    scanf("%d %d",&n, &c);

    for (int i = 0; i <n; i++)
    {
       scanf("%d %d",&sair,&entrou);
        contador -= sair;
        contador += entrou;
        if (contador>c)
        {
            maxi = maxi +1;
        }
        

    }
    //condicao de saida, se ultrapassar de 0 eh por que o contador ultrapassou pelo menos 1x
    if (maxi>0)
    {
        printf("S");
    }else
        printf("N");    
    




}