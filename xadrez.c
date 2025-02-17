#include <stdio.h>

// Desafio de Xadrez - MateCheck
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
  
#include <stdio.h>
                

void rainha (int quantidade){
    if(quantidade > 0){
        rainha(quantidade - 1);
        printf("%d esquerda\n", quantidade);
    }
   }

void torre (int movimento) { 
    if(movimento > 0) {
        torre(movimento - 1);
        printf("%d direita\n", movimento);
    }
}

int main(){
    int movimento1=0;
    int numero = 5;
    printf("Movimento da torre a partir da casa atual (%d)\n", movimento1);
    torre(numero);

    int movimento2 = 0;
    int movimento = 8;
    printf("Movimento rainha a partir da casa atual(%d)\n", movimento2);
    rainha(movimento);

   int linha_bispo = 0;
   int coluna_bispo = 0;
   printf("Movimentação do Bispo a partir do movimento (%d, %d): \n", linha_bispo ,coluna_bispo);
   
   while(linha_bispo <= 5){
    coluna_bispo = 0;
    while(coluna_bispo <= 5){
        if(linha_bispo == coluna_bispo)
        printf("(%d - %d) direita, cima\n", coluna_bispo ,linha_bispo);
        coluna_bispo++;
    }
    linha_bispo++;

   }

   int movimento3 = 0;
   int movimento4 = 0;
   for(int linha_cavalo = 2, coluna_cavalo = 1; linha_cavalo <=2 && coluna_cavalo <= 1; linha_cavalo++, coluna_cavalo++){
     printf("Movimentação do cavalo a partir da casa atual (%d, %d)\n", movimento3, movimento4);
    printf("(%d - %d) cima, cima, direita\n",linha_cavalo, coluna_cavalo);
   }  
    return 0;
     }
      





  
        
    
    


