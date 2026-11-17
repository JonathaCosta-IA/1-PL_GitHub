#include <stdio.h>
#include <stdlib.h>

#include "bib.h"
#define N 10

int main()
{
 
    // Criar laço
    int op = -1;
    char ch = 'S';
    // -------------------------------------------
    do{
        Menu();
        scanf("%d",&op);    
        system("clear");
        Escolha(op);
        if (op!=5) {
            printf("Deseja retornar ao menu principal?(S/N)");
            scanf(" %c",&ch);
            system("clear");
        }
        
    } while ((ch == 'S' || ch == 's') && op != 5);
// -------------------------------------------
return 0;

}    