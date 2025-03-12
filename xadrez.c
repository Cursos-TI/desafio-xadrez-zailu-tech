
// Desafio de Xadrez - MateCheck
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
  
     #include <stdio.h>

     // Função para mover o bispo no tabuleiro
     void Moverbispo (){
     
         int opcao;
         int linha = 0;
         int coluna = 0;
     
     // Solicita ao usuário a direção de movimento do bispo
     printf("Escolha os movimentos do bispo: \n");
     printf("1. Diagonal superior direita\n");
     printf("2. Diagonal superior esquerda\n");
     printf("3. Diagonal inferior direita\n");
     printf("4. Diagonal inferior esquerda\n");
     scanf("%d", &opcao);
     printf("-------------------------------\n");
     
     // Solicita a posição inicial do bispo
         printf("Digite o número da linha:\n");
         scanf("%d", &linha);
         
         printf("Digite o número da coluna:\n");
         scanf("%d", &coluna);
     
     // Verifica se a posição está dentro dos limites
     if(linha < 0 || linha >= 8 || coluna < 0 || coluna >=8){
     printf("Posição inválida: Digite números entre 0 e 7.\n");
     return;
         }
     
     // Movimento diagonal superior direito
     if(opcao == 1){
     for(int j = 0; j < 7; j++){
      for(int i = 0; i < 7; i++){
      if(linha > 0 && coluna < 7){
     linha--;
     coluna++;
     printf("Linha: %d e coluna: %d diagonal superior direita\n", linha, coluna);
     
     }
     
     }
     
     }
     }
     
     // Movimento diagonal superior esquerda
     else if (opcao == 2)
     {
     
     for(int j = 0; j < 7; j++){
      for(int i = 0; i < 7; i++){
     if(linha > 0 && coluna > 0){
     linha--;
     coluna--;
      printf("Linha: %d e coluna: %d diagonal superior esquerda\n", linha, coluna);
     
     }
     }
     }
     } 
     
     // Diagonal inferior direita
     else if (opcao == 3)
     {
     for(int j = 0; j < 8; j++){
     for(int i = 0; i < 8; i++){
     if(linha < 7 && coluna < 7){
     linha++;
     coluna++;  
               
     printf("Linha: %d e coluna: %d diagonal inferior direita\n", linha, coluna);
             
     }
     }
     }
     }
     
     // Diagonal inferior esquerda
     else if (opcao == 4)
     {
     for(int j = 0; j < 8; j++){
     for(int i = 0; i < 8; i++){
     if(linha < 7 && coluna > 0){
     linha++;
     coluna--;
     
     printf("Linha: %d e coluna: %d diagonal inferior esquerda\n", linha, coluna);
     }
     }
     }              
     }
     }
      
     // Função para mover a rainha no tabuleiro
     void Mover_rainha (){
     
         int opcao;
         int linha = 0;
         int coluna = 0;
     
     // Solicita ao usuário a direção de movimento da rainha
        printf("Escolha os movimentos da rainha:\n");
        printf("1. Direita\n");
        printf("2. Esquerda\n");
        printf("3. Cima\n");
        printf("4. Baixo\n");
        printf("5. Diagonal direita\n");
        printf("6. Diagonal esquerda\n");
        scanf("%d", &opcao);
        printf("-------------------------\n");
     
     // Solicita a posição inicial da rainha
     printf("Digite o número da linha: ") ;
     scanf("%d",&linha);
     
     printf("Digite o número da coluna: ") ;
     scanf("%d", &coluna);
     
     printf("-----------------------------\n");
     
      // Verifica se a posição fornecida está dentro dos limites do tabuleiro
     if(linha < 0 || linha >= 8 || coluna < 0 || coluna >= 8){
     printf("Posição inválida: Escolha números entre 0 e 7\n");
         return;
     }
     
     // Movimento para direita
     if(opcao == 1){
     while(coluna < 7){
     coluna++;
     printf("Linha: %d coluna: %d\n", linha, coluna);
     
     }
     }
     
     // Movimento para esquerda
     else if (opcao == 2)
     {
     
      while(coluna > 0){
     coluna--;
     printf("Linha: %d coluna: %d\n", linha, coluna);
     }
     }
      
     // Movimento para cima
     else if (opcao == 3)
     {
     while(linha > 0){
      linha--;
      printf("Linha: %d coluna: %d\n", linha, coluna);
     
     }
     }
     
     //Movimento para baixo
     else if (opcao == 4)
     {
     while(linha < 7){
     linha++;
     printf("Linha: %d coluna: %d\n", linha, coluna);
     
     }
     }
     
     // Movimento diagonal direita
     else if (opcao == 5)
     {
     while(linha < 7 && coluna < 7){
     linha++;
     coluna++;
     printf("Linha: %d coluna: %d\n", linha, coluna);
     
     }
     }
     
     // Moviemento diagonal para esquerda
      else if (opcao == 6)
      {
     while(linha < 7 && coluna > 0){
      linha++;
     coluna--;
      printf("Linha: %d coluna: %d\n", linha, coluna);
      }
     }
         
     }
        
     // Função para mover a torre no tabuleiro
     void Movertorre () { 
     
         int opcao;
         int linha = 0;
         int coluna = 0;
     
     // Solicita ao usuário o movimento da torre
        printf("Escolha os movimentos da torre: \n");
        printf("1. Direita \u2192\n");
        printf("2. Esquerda \u2190\n");
        printf("3. Cima \u2191\n");
        printf("4. Baixo \u2193\n");
        scanf("%d", &opcao);
        printf("------------------\n");
     
     // Solicita a posição inicial da torre
     printf("Digite o número da linha: ") ;
     scanf("%d",&linha) ;
     
     printf("Digite o número da coluna: ") ;
     scanf("%d", &coluna) ;
     
     printf("---------------------\n");
     
     // Verifica se a torre está nos limites do tabuleiro
     if(linha < 0 || linha >= 8 || coluna < 0 || coluna >=8){
     printf("Posição inválida: Digite números entre 0 e 7\n");
         return;
     }
     
     // Moviemento para direita
     if(opcao == 1){
     while(coluna < 7){
     coluna++;
     printf("Linha: %d coluna: %d\n", linha, coluna);
     }
      }
     
      // Movimento para a esquerda
     else if (opcao == 2)
     {
      while(coluna > 0){
     coluna--;
      printf("Linha: %d coluna: %d\n", linha, coluna);
     }
     }
     
     // Movimento para cima
     else if(opcao == 3){
     while(linha > 0){
     linha--;
      printf("Linha: %d coluna: %d\n", linha, coluna);
     }
     }
     
     // Movimento para baixo
     else if(opcao == 4){
     while(linha < 7){
      linha++;
             
      printf("Linha: %d coluna: %d\n", linha, coluna);
      }
     
     }
     }
         
     // Função para mover o cavalo no tabuleiro
       void MoverCavalo(){
     
     int opcao;
     int linha = 2;
     int coluna =1;
     
     // Solicita ao usuário o movimento do cavalo
       printf("Escolha o movimento do cavalo: \n");
       printf("1. cima 2 e direita 1 \n");
       printf("2. cima 2 e esquerda 1 \n");
       printf("3. Baixo 2 e direita 1 \n");
       printf("4. Baixo 2 e esquerda 1 \n");
       printf("5. Direita 2 e cima 1 \n");
       printf("6. Direita 2 e baixo 1 \n");
       printf("7. Esquerda 2 e cima 1 \n");
       printf("8. Esquerda 2 e baixo 1\n");
       scanf("%d", &opcao);
       printf("--------------------------\n");
     
     // Movimento 1 cima
     if(opcao == 1) {for(int j = 0; j < 2; j++){ 
     linha--;
     printf("Cima\n");
     }
     
     // Movimento 1 direita
     for(int i = 0 ; i < 1; i++) { coluna++;
     printf("Direita\n");
     }
     }
     
     // Movimento 2 cima
     else if (opcao == 2)
     {
     for(int j = 0; j < 2; j++){
     linha--;
     printf("Cima\n");
     }
     
     // Movimento 2 esquerda
     for(int i = 0; i < 1; i++){
     coluna--;
     printf("Esquerda\n");
     }
     }
     
     // Movimento 3 baixo
     else if (opcao == 3)
     {
     for(int j = 0; j < 2; j++){
      linha++;
     printf("Baixo\n");
     }
     
     // Movimento 3 direita
     for(int i = 0; i < 1; i++){
     coluna++;
     printf("Direita\n");
     }
     }
     
     // Movimento 4 baixo
     else if (opcao == 4)
     {
     for(int j = 0; j < 2; j++){
     linha++;
     printf("Baixo\n");
     }
     
     // Movimento 4 esquerda
     for(int i = 0; i < 1; i++){
      coluna--;
     printf("Direita\n");
     }
     }
     
     // Movimento 5 direita
     else if (opcao == 5)
     {
     for(int j = 0; j < 2; j++){
      coluna++;
     printf("Direita\n");
     }
     
     // Movimento 5 cima
     for(int i = 0; i < 1; i++){
     linha--;
     printf("Cima\n");
     }
     }
     
     // Movimento 6 baixo
     else if (opcao == 6)
     {
     for(int j = 0; j < 2; j++){
     linha++;
     printf("Baixo\n");
     }
     
     // Movimento 6 direita
     for(int i = 0; i < 1; i++){
      coluna++;
      printf("Direita\n");
     }
     }
     
     // Movimento 7 esquerda
     else if (opcao == 7)
     {
      for(int j = 0; j < 2; j++){
      coluna--;
      printf("Esquerda\n");
     }
     
     // Movimento 7 cima
     for(int i = 0; i < 1; i++){
     linha--;
     printf("Cima\n");
     }
     }
     
     // Movimento 8 esquerda
     else if (opcao == 8)
     {
     for(int j = 0; j < 2; j++){
     coluna--;
     printf("Esquerda\n");
     }
     
     // Movimento 8 baixo
     for(int i = 0; i < 1; i++){
     linha++;
     printf("Baixo\n");
     }
     }
         
     }
         
     
     // Função principal
     int main(){
     
     int opcao, casas;
     
     // Exibi o menu principal
     printf("\nBem-Vindo ao jogo de xadrez\n");
     printf("Escolha uma opção para jogar!\n");
     printf("1. Bisbo \u2657\n");
     printf("2. Torre \u265C\n");
     printf("3. Rainha \u2655\n");
     printf("4. Cavalo \u2658\n");
     printf("5. Sair\n");
     scanf("%d", &opcao);
     printf("-------------------\n");
     
     // Chama a função correspondente à peça escolhida
     switch (opcao)
     {
     case 1:
        
         Moverbispo();
         break;
     
         case 2: 
         Movertorre();
         break;
     
         case 3:
         Mover_rainha();
         break;
     
     case 4:
     
         MoverCavalo();
         break;  
     
         case 5:
         printf("Obrigado por jogar!\n");
         break;
     
     default:
     printf("Opção inválida!\n");
         break;
     }
     return 0;
      }
     
     
    
















  
        
    
    


