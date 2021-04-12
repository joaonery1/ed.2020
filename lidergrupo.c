#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#define TAM 3

int main()
{
    //inicializacao de variaveis
    int t1[3], t2[3];
    int soma = 0, i, j;
    int pontos = 0, gols = 0, fgols = 0;
    int pontos2 = 0, gols2 = 0, fgols2 = 0;
    char texto1[10], texto2[10];
    //leitura do primeiro pais
    scanf("%s", texto1);

    for (i = 0; i < 3; i++)  //armazenar tabela do primero
    {
        scanf("%d", &t1[i]);
    }
    //leitura do segundo pais
    scanf("%s", texto2);

    for (i = 0; i < 3; i++) //armazenar tabela do segundo
    {
        scanf("%d", &t2[i]);
    }


    for (i = 0; i < 3; i++)  //armazenar dados da tabela nas variaveis
    {
        pontos = t1[0];
        gols = t1[1];
        fgols = t1[2];
        pontos2 = t2[0];
        gols2 = t2[1];
        fgols2 = t2[2];
    }

    int tamanho = 0;
    tamanho = strlen(texto1);
/*
    'a' = ASCII 97
    'A' = ASCII 65

    */
    for (i = 0; i < tamanho; i++)  //diminuir letra 
    {
        texto1[i] = tolower(texto1[i]);
        texto2[i] = tolower(texto2[i]);
    }

    //estrutura de decisao para saber quem ganha ou emapata
    if (pontos > pontos2)
    {
        printf("%s", texto1);
    }
    else
    {
        if (pontos2 > pontos)
        {
            printf("%s", texto2);
        }
        else
        {
            if (gols > gols2)
            {
                printf("%s", texto1);
            }
            else
            {
                if (gols2 > gols)
                {
                    printf("%s", texto2);
                }
                else
                {
                    if (fgols > fgols2)
                    {
                        printf("%s", texto1);
                    }
                    else
                    {
                        if (fgols2 > fgols)
                        {
                            printf("%s", texto2);
                        }
                        else
                        {
                            if (pontos == pontos & gols == gols2 & fgols == fgols2 )
                            {
                                printf("EMPATE");
                            }else
                            {
                                printf("EMPATE");
                            }
                            
                            
                        }
                    }
                }
            }
        }
    }

    return 0;
}