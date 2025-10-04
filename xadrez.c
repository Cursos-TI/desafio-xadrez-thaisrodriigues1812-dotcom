#include <stdio.h>
/*
   Programa: Simulação de movimentos de peças de xadrez
   Peças: Torre, Bispo e Rainha
   Estruturas usadas:
       - Torre → for
       - Bispo → while
       - Rainha → do-while
   Cada peça tem uma quantidade fixa de casas para se mover,
   e o programa imprime o movimento em cada passo.
*/
int main() {
   // ======= Variáveis (quantidade de casas a mover) =======
   int casasTorre = 5;   // Torre -> direita
   int casasBispo = 5;   // Bispo -> diagonal cima-direita
   int casasRainha = 8;  // Rainha -> esquerda
   // ======= Movimento da Torre (for) =======
   printf("=== Movimento da TORRE ===\n");
   printf("A Torre se move 5 casas para a direita:\n");
   for (int i = 1; i <= casasTorre; i++) {
       printf("Casa %d: Direita\n", i);
   }
   // ======= Movimento do Bispo (while) =======
   printf("\n=== Movimento do BISPO ===\n");
   printf("O Bispo se move 5 casas na diagonal para cima e à direita:\n");
   int contadorBispo = 1;
   while (contadorBispo <= casasBispo) {
       printf("Casa %d: Cima, Direita\n", contadorBispo);
       contadorBispo++;
   }
   // ======= Movimento da Rainha (do-while) =======
   printf("\n=== Movimento da RAINHA ===\n");
   printf("A Rainha se move 8 casas para a esquerda:\n");
   int contadorRainha = 1;
   do {
       printf("Casa %d: Esquerda\n", contadorRainha);
       contadorRainha++;
   } while (contadorRainha <= casasRainha);
   printf("\nMovimentos concluídos!\n");
   return 0;
}
