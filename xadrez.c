#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
/*
int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int b, t, r, c; //b - bispo, t - torre, r - rainha, c - cavalo;
    

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
   
    printf("Movimento do Bispo:\n"); //nome da peça

    for (b = 1; b <= 5 ; b++)
    {
        printf("Cima Direita\n"); //direção do movimento
    }

    printf("\n"); //espaço para melhor visualização na saída;
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    t = 1;

    printf("Movimento da torre: \n");

    while (t <= 5)
    {
        printf("Direita\n"); // direção do movimento;
        t++; // incremento; 
    }
    
    printf("\n"); //espaço para melhor visualização na saída;

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
   
    r = 1;

    printf("Movimento da rainha:\n"); //expecificando a peça;

    do
    {        
        printf("Esquerda\n"); //direção do movimento;
        r++; //incremento

    } while (r <= 8); //término do processo;

    printf("\n"); //espaço para melhor visualização na saída;
     
       
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    
    printf("Movimento do cavalo:\n");

    c = 1;

    while (c--) //definição de uma repetição do loop;
    {
        for(int primeiroMovimento = 1; primeiroMovimento <= 2; primeiroMovimento++) //declaração de uma variável 'primeiroMovimento' e definição de duas repetições do loop interno;
        {
            printf("Baixo\n"); //primeiro movimento, duas casas para baixo;
        }

        printf("Esquerda\n"); //segundo movimento, uma casa para a esquerda;
    }
    return 0;
}
    */

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

//Funções recursivas para cada peça;
void movTorre (int n){
        if (n > 0){
            printf("Direita \n"); //Direção do movimento;
            movTorre (n - 1); //Recursividade, decremento de n;
        }
    }
    
void movRainha (int n){
    if (n > 0){
        printf("Esquerda \n"); //Direção do movimento;
        movRainha (n -1); //Recursividade, decremento de n;
    }
}
void movBispo (int n){
    if (n > 0){
        printf("Cima direita \n"); //Direção do movimento;
        movBispo (n - 1); //Recursividade, decremento de n;
    }
}

int main (){

    int casasT = 5, casasR = 8, casasB = 5, bispo1, bispo2, cavalo1, cavalo2, cavalo3; //variáveis para cada peça;

    printf("Movimento da Torre:\n");
    movTorre(casasT);

    printf("\n"); //espaço para melhor vizualição na saída;

    printf("Movimento da Rainha:\n");
    movRainha(casasR);

    printf("\n"); //espaço para melhor vizualição na saída;

    //Por meio da recursividade
    printf("Movimento do Bispo:\n");
    
    movBispo(casasB);

    printf("Ou\n");

    //Por meio do loop
    for(bispo1 = 1; bispo1 <= 5; bispo1++){
        for (bispo2 = 1; bispo2 < 2; bispo2++)
        {
            printf("Cima "); //Direção vertical com espaço para a outra direção;
        }

        printf("direita\n"); //Direção horizontal que somando com a anterior resultam na direção diagonal;
        
    }

    printf("\n"); //espaço para melhor vizualição na saída;

    printf("Movimento do Cavalo:\n");

    
    for (cavalo1 = 1, cavalo2 = 6; cavalo1 < cavalo2; cavalo1++, cavalo2--) //Loop avançado, duas variáveis que controlam o primeiro movimento;
    {                
        if (cavalo2 == 4) break; //Condição para encerrar o movimento da peça;
        printf("Cima\n");

        for(cavalo3 = 5; cavalo3 == cavalo2; cavalo3++) //Loop com condição para o segundo movimento;
        {
            printf("Direita\n");
        }
        
        
    }
    

    return 0;
    }