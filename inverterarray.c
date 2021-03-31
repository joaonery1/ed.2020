#include <stdio.h>
#define LIM 500
 

int main (){
    int n, i;
    int vet[LIM];

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&vet[i]);
    }

    for(i=n-1;i>=0;i--){
        printf("%d",vet[i]);
    }
    
    
}