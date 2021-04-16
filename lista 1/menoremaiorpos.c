#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<stdbool.h>






int main (){
    int tamanho,menor,posi=0;
    
    printf("Digite o tamanho do array \n" );
    scanf("%d", &tamanho);
    int vet[tamanho];
    

    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d",&vet[i]);
    }
    
    menor = vet[0]; //menor recebe o primeiro numero 

    for (int i = 1; i < tamanho; i++)
    {   
        //caso o numero do vetor na posicao 1> for maior 
        if (vet[i]<menor)
        {
            menor = vet[i];
            posi =i; //fiz um auxiliar para fazer a contagem de posicao comecando do 0
        }
        
    }

    printf("Menor valor: %d \n",menor);
    printf("Posicao:% d",posi);
    return 0;
    



    
    


}