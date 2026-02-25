#include "funcoes.h"
#include <stdio.h>
void carregarArquivo(char path[])
{
}

void buscarElemento(int vet[], int n, int opc, int x)
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