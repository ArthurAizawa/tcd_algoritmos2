#include <stdio.h>
#include <windows.h>
#include <stdbool.h>
#include "funcoes.h"

int main()
{
    LARGE_INTEGER frequency;
    LARGE_INTEGER inicio,fim;
    double elapsedtime;
                
    
    QueryPerformanceFrequency(&frequency);
    QueryPerformanceCounter(&inicio);
     
    int opc;
    FILE *fp;
    bool sair;
    do{
        printf("\n========= MENU PRINCIPAL =========\n");
        printf("1. Carregar arquivo de dados\n");
        printf("2. Buscar elemento (linear ou binaria)\n");
        printf("3. Ordenar dados (Insert., Bubble, Selection, Merge, Quick, EXTRA)\n");
        printf("4. Gerar relatorio (Log)\n");
        printf("5. Sair\n");
        printf("==================================\n");
        scanf("%d", &opc);

        switch(opc)  
        {        
            //otimizar teste de arquivo
            case 1:
                char path[20];
                bool arquivo;
                carregarArquivo(path);
                printf("Arquivo carregado com sucesso!\n");
                arquivo = true;    
                break;

            case  2:
                if (!arquivo) {
                    printf("Aviso: Voce deve carregar um arquivo (Opcao 1) antes de buscar.\n");
                } else{
                    int subopc;
                    printf("Escolha O Algoritimo"); //escolha qualquer desgraça
                    printf("Escolha: ");
                    scanf("%d", &subopc);
                }
                break;

            case 3:
                if (!arquivo) 
                {
                printf("Aviso: Voce deve carregar um arquivo (Opcao 1) antes de buscar.\n");
                } else {
                    printf("\n--- SUBMENU ORDENACAO ---\n"); 
                    printf("1. Insertion Sort\n2. Bubble Sort\n3. Selection Sort\n");
                    printf("4. Merge Sort\n5. Quick Sort\n6. EXTRA\n");
                    int subopc;
                    scanf("%d", &subopc);

                    switch (subopc)
                        {
                    case 1:
                        Insertion_Sort(); // funcao Insertion Sort
                        break;

                        case 2:
                            Bubble_Sort(); // funcao Bubble Sort
                            break;
                        case 3:
                            Selection_Sort(); // funcao Selection Sort
                        break;
                        case 4:
                            Merge_Sort(); // funcao Merge Sort
                            break;
                        case 5:
                            Quick_Sort(); // funcao Quick Sort
                            break;
                        case 6:
                            extra(); // funcao extra a ser escolhida
                            break;    
                        
                        default:
                            break;
                    }
                }
                break;
                case 4:
                    break;
                case 5:
                    break;
                               
                default:
                    break;
        }
    } while(sair == false);

    QueryPerformanceCounter(&fim);
    elapsedtime = (fim.QuadPart - inicio.QuadPart) * 1000.0 / frequency.QuadPart;
    printf(" %2d - Time: %.16lf ms\n", elapsedtime);

    return 0;
}