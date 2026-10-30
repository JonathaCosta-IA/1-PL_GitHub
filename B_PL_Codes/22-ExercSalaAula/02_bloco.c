#include<stdio.h>
#define N 10

void Sujar()
{
    int lixo[100];
    for (int i = 0; i < 100; i++) lixo[i] = 999;
}

void CarregarVetor(int x[])
{
    printf("\n");
    for (int i=0;i<N;i++){
    printf("Informe um elemento do vetor (%d,%d)",i+1,N);
    scanf("%d",&x[i]);}
}

void ExibirVetor(int x[])
{
    printf("x={ ");
    for (int i=0;i<N;i++){
    printf("%d ",x[i]);}
    printf("}");
    
}

int main()
{
    Sujar();
    int x[N]; // Vetor vazio
    ExibirVetor(x);
    CarregarVetor(x);   
    ExibirVetor(x);
}