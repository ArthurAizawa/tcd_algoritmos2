#include "funcoes.h"
#include <stdio.h>
#include <stdbool.h>


void carregarArquivo(char path[])
{
}

int buscarElemento(int vet[], int n, int opc, int x)
{
    if (opc == 1) {
        //  busca linear
        for(int i = 0; i < n; i++)
        {
            if(vet[i] == x)
            {
                printf("Elemento enconitrado!");
                return;
            }
        }

    } else if (opc == 2) {
        // busca binária



    } else {
        printf("Opcao de busca invalida.\n");
    }
}

void ordernarDados(int vet[], int n)
{


}

void gerarRelatorio()
{
   
}

void BubbleSort(int vet[], int n)
{
    int i, j;

    for(i = 0; i < n-1; i++)
    {
        bool troca = false;

        for(j = 0; j < (n-1) - i; j++)
        {
            if (vet[j] > vet[j + i])
            {
                int temp = vet[j];

                vet[j] = vet[j + 1];
                vet[j + 1] = temp; 

                troca = true;
            }
        }

        // se não houve troca, rompe o laço
        if (!troca)
        {
            break;
        }
    }
}

void InsertSort (int vet[], int n)
{
    int i, key, j;

    for (i = 0; i < n-1; i++)
    {
        // novo elemento a ser inserido
        key = vet[i];

        j = i - 1;

        // elementos maiores que a key vão ser movidos para direita
        while(j >= 0 && vet[j] > key)
        {
            vet[j + 1] = vet[j];
            j = j - 1;  
        }

        // a key será colocada na posição certa
        vet[j + 1] = key;
    }


}