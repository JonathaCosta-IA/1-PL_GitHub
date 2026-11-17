#include <stdio.h>
#include <math.h>
#define N 10

int Dados[N][N]={
 {72 , 65 , 80 , 75 , 68 , 85 , 90 , 78 , 82 , 70} ,
 {95 , 105 , 98 , 112 , 108 , 100 , 115 , 110 , 102 , 107} ,
 {80 , 85 , 92 , 88 , 95 , 100 , 90 , 105 , 98 , 93} ,
 {85 , 90 , 100 , 110 , 105 , 115 , 108 , 95 , 102 , 112} ,
 {60 , 68 , 72 , 65 , 75 , 80 , 70 , 62 , 78 , 73} ,
 {100 , 95 , 110 , 105 , 115 , 108 , 98 , 112 , 102 , 107} ,
 {75 , 82 , 88 , 95 , 85 , 90 , 100 , 92 , 80 , 87} ,
 {110 , 105 , 115 , 100 , 108 , 112 , 95 , 105 , 118 , 110} ,
 {65 , 70 , 78 , 82 , 75 , 68 , 85 , 80 , 72 , 77} ,
 {90 , 98 , 105 , 100 , 110 , 115 , 108 , 95 , 102 , 112}
};

void ExibeMediasSensores(void)
{
    float soma;
    for(int i=0; i<N; i++) 
        {   soma=0;
            for(int j=0; j<N; j++)
                {
                    soma+=Dados[i][j];
                }
            printf("\nA média do sensor %d é %.2f",i+1,soma/N);    
         }
         printf("\n\n");
}



void ExibeDesvioPadraoSensores(void)
{
    float soma;
    for(int i=0; i<N; i++) 
        {   soma=0;
            // Calcula a média
            for(int j=0; j<N; j++)
                {
                    soma+=Dados[i][j];
                }
                float media = soma / N;
            float desvio;
            // Calcula o desvio
            for(int j=0; j<N; j++)
                {
                    desvio+=pow((Dados[i][j] - media),2);
                }
                desvio = sqrt(desvio);    

            printf("\nO desvio padrão do sensor %d é %.2f",i+1,desvio);    
         }
         printf("\n\n");
}

void ExibeMaiorMenorLeituraSensores(void)
{
    int maior=Dados[0][0], menor=Dados[0][0];
    for(int i=0; i<N; i++) 
        {   
            for(int j=0; j<N; j++)
                {
                    if((Dados[i][j])>maior){maior = Dados[i][j];}
                    if((Dados[i][j])<menor){menor = Dados[i][j];}
                }
            printf("\nA maior leitura do sensor %d é %d",i+1,maior);  
            printf("\nA menor leitura do sensor %d é %d",i+1,menor); 
            printf("\n----"); 
         }
         printf("\n\n");

}

void RelatoriaConsolidado(void)
{
    int maior,menor; 
    float soma,media,desvio;
    for(int i=0; i<N; i++) 
    {   maior = Dados[i][0];
        menor = Dados[i][0];
        soma = 0;
            for(int j=0; j<N; j++)
                {
                    if((Dados[i][j])>maior){maior = Dados[i][j];}
                    if((Dados[i][j])<menor){menor = Dados[i][j];}
                    soma+=Dados[i][j];    
                }

            media = soma / N; 
            
            for(int j=0; j<N; j++)
                {
                desvio+=pow((Dados[i][j] - media),2);
                }
                desvio = sqrt(desvio);  
                
            printf("\n-----------\nSensor %d : dados consolidados\n-----------",i+1);    
            printf("\nMaior leitura: %d",maior);
            printf("\nMenor leitura: %d",menor);
            printf("\nDesvio padrão de leituras: %.4f",desvio);
            printf("\nMedia das leituras: %.4f",media);
            printf("\n\n");
         
        }
         printf("\n\n");

}