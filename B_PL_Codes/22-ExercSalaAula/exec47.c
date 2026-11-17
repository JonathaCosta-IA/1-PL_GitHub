#include<stdio.h>
#include<math.h>
#include "bib.h"

#define N 10

// int Somatorio(int x[])
// {
//     int soma=0;
//     for(int i=0; i<N;i++)
//     {soma+=x[i];} 

//     return soma;  
// }

int SomatorioProd(int x[], int y[])
{
    int soma=0;
    for(int i=0; i<N;i++)
    {soma+=x[i]*y[i];} 

    return soma;  
}

float SomatorioRaiz(int x[], int y[])
{
    double soma=0;
    for(int i=0; i<N;i++)
    {   double SomProd = pow(x[i],2) + pow(y[i],2);
        double raiz;
        if (i!=0) raiz = pow(SomProd, (1.0/i));
        soma+=raiz;} 
    return soma;  
}

float CalcVariancia(int x[])
{
    float media = Somatorio(x)/N;
    
    float soma=0;
    for(int i=0; i<N;i++)
    {  
        soma+= pow(x[i] - media,2);
    } 
    
    return soma/N-1;  
}

void ExibirResultados(float Resultados[])
{

    printf("\na) O valor da somatório do vetor X é %.3f.",Resultados[0]);
    printf("\nb) O valor da média do vetor X é %.3f.",Resultados[1]);
    printf("\nc) O valor da somatório do produto do vetor X e vetor Y é %.3f.",Resultados[2]);
    printf("\nd) O valor da raíz i-ésima do somatório do produto do vetor X e vetor Y é %.3f.",Resultados[3]);
    printf("\ne) O valor da variância do vetor X é %.3f.",Resultados[4]);
    printf("\nf) O valor do desvio padrão do vetor X é %.3f.",Resultados[5]);

}

int main()
{
    int x[N] ={1,2,3,4,5,6,7,8,9,10};
    int y[N] ={10,9,8,7,6,5,4,3,2,1};

    float Resultados[6];
    // Item a
    Resultados[0] = Somatorio(x);
    // // Item b
    Resultados[1] = Resultados[0]/N;
    // // // Item c
    // Resultados[2] = SomatorioProd(x,y);
    // // // Item d
    // Resultados[3] = SomatorioRaiz(x,y);
    // // // Item e
    // Resultados[4] = CalcVariancia(x);
    // // // Item f
    // Resultados[5] = sqrt(Resultados[4]); 

    //Resultados
    ExibirResultados(Resultados);

}