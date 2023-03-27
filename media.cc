#include <iostream>
#include <stdio.h>


float mediaValoresVetor(float vet[], int tam){
    float soma=0;
    for (int i = 0; i < tam; i++)
    {
        soma=soma + vet[i];
    }
    return soma/tam;
}

int main()
{
   float vet[] = {1,2,3,4,5,6,7,0,0,10,11,12,13,14,15,0,0,18,19,20,21,22,0,0,25,26,28,29,30},acima = 0,maior = 0, menor= 0;
   float media;
   media = mediaValoresVetor(vet, 30);
   cout << "média: " << media << endl;

    for (int i = 0; i < 30; i++)
    {
        if (vet[i] > maior)
        {
            maior=vet[i]
        }
        
    }
    for (int i = 0; i < 30; i++)
    {
        if (vet[i] < menor)
        {
            menor=vet[i]
        }
        
    }
    
   for (int i = 0; i < 30; i++)
   {
    if (vet[i] > acima)
    {
        acima++;
    }   
   }
   count <<" Número de dias no mês em que o valor de faturamento diário foi superior à média mensal: " << acima << endl;
   count <<"O maior valor de faturamento ocorrido em um dia do mês; " << maior << endl;
   count <<"O menor valor de faturamento ocorrido em um dia do mês; " << menor << endl;
   
    return 0;
}
