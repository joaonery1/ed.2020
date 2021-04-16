#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<stdbool.h>

int main (){

    bool mult = false;              //booleana para agilizar a saida
    int i, m,n,saida,maximo,count;  //entradas
    scanf("%d", &m);  
    scanf("%d",&n);
    
    if(m>n){                    //caso o m for maior que o n fiz uma inversão
        count = n;
        n = m;
        m = count;
    }
    for (i=m;i<=n;i++){                          //laco para fazer a conta do mult
        if((m*i)<=n)
        {
            mult = true;

            saida = (m*i);

        }

    }
    //condiconal para a saida
    if(mult==false || n == 1){
        printf("sem multiplos menores que %d",count);
    }else
    {
        printf("%d",saida);
    }
    

    return 0;
}