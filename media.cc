#include <iostream>
#include <stdio.h>

using namespace std;

float mediaValoresVetor(float vet[], int tam){
    float soma=0;
    for (int i = 0; i < tam; i++)
    {
        soma=soma + vet[i];
    }
    return soma/tam;
}
//eu não sei usar arquivo xml
int main()
{
   float vet[] = {22174.1664,24537.6698,26139.6134,0.0,0.0,26742.6612,0.0,42889.2258,46251.174,11191.4722,0.0,0.0,3847.4823,373.7838,2659.7563,48924.2448,18419.2614,0.0,0.0,35240.1826,43829.1667,18235.6852,4355.0662,13327.1025,0.0,0.0,25681.8318,1718.1221,13220.495,8414.61},acima = 0,maior = 0, menor= 0;
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
