#include <stdio.h>
#include <stdlib.h>
#include "bib.h"

void Menu(void)
{
    printf( 
    "\n========================================"
    "\nSISTEMA DE ANALISE INDUSTRIAL"
    "\n========================================"
    "\n(0) Identificacao do responsavel"
    "\n(1) Media de cada sensor"
    "\n(2) Desvio padrao de cada sensor"
    "\n(3) Maior e menor leitura"
    "\n(4) Relatorio consolidado"
    "\n(5) Sair do sistema"
    "\n========================================"
    "\n\nEscolha uma opcao : "
    );
}

void Escolha(int op)
{   
    switch (op)
    {
    case 0: 
        {system("clear");
        printf("\nResponsável pelo algoritmo: Jonatha Costa"
               "\n\n"
                );
        break;
        }
    case 1: 
        {system("clear");
        printf("\n\nExibindo as médias dos sensores.\n");
        ExibeMediasSensores();
        break;}

    case 2: 
        {system("clear");
        printf("\n\nExibindo o desvio padrão dos sensores.\n");
        ExibeDesvioPadraoSensores();
        break;}
    
    case 3: 
      {system("clear");
        printf("\n\nExibindo a maior e menor leitura de cada sensor.\n");
        ExibeMaiorMenorLeituraSensores();
        break;}

    case 4: 
        {system("clear");
        printf("\n\nExibindo o relatório consolidado de cada sensor.\n");
        RelatoriaConsolidado();
        break;}

    
    break;

    default:
        printf("Informe um valor válido!");
        break;
    }


}