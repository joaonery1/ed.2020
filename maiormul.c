#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<stdbool.h>

int main (){

    bool mult = false;
    int i, m,n,saida,maximo,count;
    scanf("%d", &m);
    scanf("%d",&n);
    
    if(m>n){
        count = n;
        n = m;
        m = count;
    }





    for (i=m;i<=n;i++){
        if((m*i)<=n)
        {
            mult = true;

            saida = (m*i);

        }

    }

    if(mult==false){
        printf("sem multiplos menores que %d",count);
    }else
    {
        printf("%d",saida);
    }
    

    return 0;
}