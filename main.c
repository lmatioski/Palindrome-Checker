#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   ///salva a palavra
    char palavra[50];
    char palavra1[50];
    printf("Insira a Palavra:");
    fgets(palavra, sizeof palavra, stdin);
    palavra[strlen(palavra) -1] = '\0';
    ///copia a string antes de inverter
    strcpy(palavra1,palavra);

    ///mostra a palavra
    printf("A palavra inserida foi: %s\n", palavra);
    printf("A palavra inserida foi: %s\n", palavra1);

    ///inverte a palavra
    int tamanho = strlen(palavra);
    int c, i, j;
    for (i=0,j=tamanho-1; i<j;i++,j--)
    {
        c=palavra[i];
        palavra[i]= palavra[j];
        palavra[j] = c;
    }
    printf("A palavra invertida \202: %s\n", palavra);
    if (strcmp(palavra,palavra1)) { ///comparar strings
        printf("A palavra N\707O \202 um pal\641ndromo."); ///se n for
        }else {
        printf("A palavra \202 um pal\641ndromo."); ///se for
    };
    return 0;
}
