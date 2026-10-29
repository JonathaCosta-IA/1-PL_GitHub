#include<stdio.h>

int RecebeNumero(void){
    int num;
    printf("Informe um número, por favor:\n");
    scanf(" %d",&num);
    return num;
    }

void TestaNumeroMediaSete(int x){
    if (x>7) printf("É maior que sete.\n");
    if (x<7) printf("É menor que sete.\n");
    if (x==7) printf("É igual a sete.\n");
}

void TestarParImpar(int x){
    if (x % 2 == 0) {printf("O número é par!\n");}
    else {printf("O número é ímpar!\n");}
}

void TestarPrimo(int numero)
{
   int i = 2, eh_primo = 1;
   if (numero < 2) eh_primo = 0;
    // Laço para verificar divisibilidade até a raiz quadrada do número
    while (i*i <= numero && eh_primo){
        if (numero % i == 0) eh_primo = 0;
        i++;
    }
    // Exibir o resultado
    if (eh_primo) printf("%d é um número primo.\n", numero);
    else printf("%d não é um número primo.\n", numero);
}

void TestarPertinenciaNaturais(int x)
{   
    if (x<0) printf("O número %d não pertence ao conjunto dos números naturais.",x);
    if (x>=0) printf("O número %d pertence ao conjunto dos números naturais.",x);
    printf("\n");
}


int main()
{
    int x = RecebeNumero();
    TestaNumeroMediaSete(x);
    TestarParImpar(x);
    TestarPrimo(x);
    TestarPertinenciaNaturais(x);
    return 0;
}

