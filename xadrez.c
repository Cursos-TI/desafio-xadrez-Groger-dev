#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

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

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
