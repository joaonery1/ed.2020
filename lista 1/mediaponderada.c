#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double AnalisarSituacao(double n1, double n2, double n3,double n4){
    double resul;
    double media;
    media = ((n1*1)+(n2*2)+(n3*3)+(n4*4))/10;
    if (media>=9){
        printf("Aprovado com louvor");
        //printf(" %.2lf",media);
    }
    else if (media>=7)
    {
        printf("aprovado");
        //printf(" %.2lf",media);
    }else if (media<3)
    {
        printf("reprovado");
        //printf(" %.2lf",media);
    }else
    {
        printf("prova final");
        //printf(" %.2lf ", media);
    }
    
    return media;
    

}





int main() {

    double  n1,n2,n3,n4;
    
    scanf("%lf%lf%lf%lf" ,&n1,&n2,&n3,&n4);

    AnalisarSituacao(n1,n2,n3,n4);
	return 0;




}