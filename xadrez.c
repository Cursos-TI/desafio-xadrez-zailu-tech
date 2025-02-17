#include <stdio.h>

// Desafio de Xadrez - MateCheck
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
  
#include <stdio.h>

void recursivobispo (int casas){ // Realiza o movimento do bispo (diagonal para direita, cima) de forma recursiva.
    if(casas > 0){  // Verifica se há movimentos restantes
        recursivobispo(casas -1 ); // Chamada recursiva para continuar o movimento
        printf("Direita, cima\n");// Imprime o número de movimentos restantes para a direita, cima
    }
}
void rainha (int quantidade){ 
    if(quantidade > 0){
        rainha(quantidade - 1);
        printf("esquerda\n", quantidade);
    }
   }
 
void torre (int movimento) {  // Realiza o movimento da torre para a direita de forma recursiva.
    if(movimento > 0) {
        torre(movimento - 1);
        printf("direita\n", movimento);
    }
}

int main(){
    int movimento1=0; // posição inicial da torre
    int numero = 5; // Número de movimentos da torre
    printf("Movimentação da torre\n");
    torre(numero);  // Chama a função torre para realizar o movimento

    int movimento2 = 0;  // posição inicial da rainha
    int movimento = 8; // Número de movimentos da rainha
    printf("Movimentação da rainha\n");
    rainha(movimento);  // Chama a função rainha para realizar o movimento

   int linha_bispo = 0;  // posição inicial do bispo
   int movimento5= 5; // Número de movimentos do bispo
   printf("Movimentação do Bispo\n");
   recursivobispo(movimento5);
   

   int movimento3 = 0; // Posição inicial do cavalo 
   for(int linha_cavalo = 2, coluna_cavalo = 1; linha_cavalo <=2 && coluna_cavalo <= 1; linha_cavalo++, coluna_cavalo++){
     printf("Movimentação do cavalo\n");
    printf("cima, cima, direita\n");
   }  
    return 0;
     }
      





  
        
    
    


