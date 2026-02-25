#include "funcoes.h"
#include <stdio.h>
void carregarArquivo(char path[])
{
}

int buscarElemento(int vet[], int n, int opc, int x)
{
    //busca linear
    if(opc == 1)
    {          
        
    } 
    //busca binaria
    else if(opc == 2)
    { 
        int j = n -1, i = 0;
        while(i <= j)
        {
            int meio = (i + j)/2;
            meio = floor(meio);
            if(x == vet[meio])
            {
                return meio;
            }
            if(j > vet[i])
            {
                j = meio + 1;
            }
            if(j < vet[i]) 
            {
                j = meio - 1;
            }
        }
        return -1;
    }
}

void ordernarDados(int vet[], int n)
{

}

void gerarRelatorio()
{
   
}