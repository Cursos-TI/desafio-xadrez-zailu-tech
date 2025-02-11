#include <stdio.h>

// Desafio de Xadrez - MateCheck
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
  
int main() {
   
        printf("Desafio Novato concluído\n");
    int linha = 8 , coluna = 7; // Posição inicial do bispo
    int linha_torre = 6 , coluna_torre= 4; // Posição inicial da torre
    int linha_rainha = 3, coluna_rainha = 8; // Posição inicial da rainha

    printf("Movimentação do Bispo a partir do movimento (%d, %d): \n", linha ,coluna);
    for(int i = 1; i <= 5; i++) {  //  Movimento para cima e para direita até 5 casas
        linha--; // Move para cima
        coluna++; // Move para direita
        printf("(%d, %d) direita, cima\n" , linha, coluna); // saída de dados
      }

      printf("Movimentação da torre a partir do movimento (%d, %d): \n", linha_torre ,coluna_torre);
        for(int i = 1; i <= 5; i++){  //  Movimento para direita até 5 casas;
            coluna_torre++; // Move para direita
            printf("(%d, %d) direita\n" ,linha_torre, coluna_torre); // saía de dados
        }
            
        printf("Movimentação da rainha a partir do movimento (%d, %d): \n", linha_rainha ,coluna_rainha);
            for(int i = 1; i <= 8; i++){  // Movimento para esquerda até 8 casas
             if(coluna_rainha <= 0){
              printf("A rainha não pode mover para a próxima casa, pois saiu do tabuleiro.\n");
            break;  // Parar o movimento se a coluna for 0 ou menor
                }
            coluna_rainha--; // Move para esquerda
             printf("(%d, %d) esquerda\n" ,linha_rainha, coluna_rainha); // saída de dados
            }
             return 0;
    }



