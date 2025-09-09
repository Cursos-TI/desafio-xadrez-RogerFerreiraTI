#include <stdio.h>
#include <stdbool.h>

/* ==================== CONSTANTES ====================*/
// Definição das constantes para movimentação das peças
const int CASAS_BISPO = 5;      // Bispo move 5 casas na diagonal direita para cima
const int CASAS_TORRE = 5;      // Torre move 5 casas para a direita
const int CASAS_RAINHA = 8;     // Rainha move 8 casas para a esquerda
const int MOVIMENTO_CAVALO = 1;  // Cavalo move 1 vez em L para cima à direita

/* ==================== FUNÇÕES RECURSIVAS ====================*/

/**
 * Função recursiva para movimentar o Bispo na diagonal direita para cima
 * @param casas_restantes: número de casas ainda a serem percorridas
 */
void mover_bispo_recursivo(int casas_restantes) {
    // Caso base: se não há mais casas para mover, para a recursão
    if (casas_restantes <= 0) {
        return;
    }
    
    // Move o bispo uma casa na diagonal (direita + cima)
    printf("Direita Cima\n");
    
    // Chamada recursiva para mover as casas restantes
    mover_bispo_recursivo(casas_restantes - 1);
}

/**
 * Função recursiva para movimentar a Torre para a direita
 * @param casas_restantes: número de casas ainda a serem percorridas
 */
void mover_torre_recursivo(int casas_restantes) {
    // Caso base: se não há mais casas para mover, para a recursão
    if (casas_restantes <= 0) {
        return;
    }
    
    // Move a torre uma casa para a direita
    printf("Direita\n");
    
    // Chamada recursiva para mover as casas restantes
    mover_torre_recursivo(casas_restantes - 1);
}

/**
 * Função recursiva para movimentar a Rainha para a esquerda
 * @param casas_restantes: número de casas ainda a serem percorridas
 */
void mover_rainha_recursivo(int casas_restantes) {
    // Caso base: se não há mais casas para mover, para a recursão
    if (casas_restantes <= 0) {
        return;
    }
    
    // Move a rainha uma casa para a esquerda
    printf("Esquerda\n");
    
    // Chamada recursiva para mover as casas restantes
    mover_rainha_recursivo(casas_restantes - 1);
}

/* ==================== FUNÇÃO PARA CAVALO ====================*/

/**
 * Função para movimentar o Cavalo em L (cima à direita) usando loops aninhados
 * com condições múltiplas, continue e break
 */
void mover_cavalo_complexo() {
    printf("=== Movimentacao do Cavalo em L (Cima a Direita) ===\n");
    
    // Loop externo: controla as etapas do movimento em L
    for (int etapa = 1; etapa <= 3; etapa++) {
        
        // Loop interno: executa os movimentos de cada etapa
        for (int movimento = 1; movimento <= 2; movimento++) {
            
            // Condição múltipla para determinar o tipo de movimento
            if (etapa == 1 && movimento == 1) {
                // Primeira etapa: mover 2 casas para cima
                printf("Cima\n");
                continue; // Pula para a próxima iteração
            }
            
            if (etapa == 1 && movimento == 2) {
                // Continua primeira etapa: segunda casa para cima
                printf("Cima\n");
                break; // Sai do loop interno para próxima etapa
            }
            
            if (etapa == 2 && movimento == 1) {
                // Segunda etapa: mover 1 casa para a direita
                printf("Direita\n");
                break; // Movimento em L completo, sai do loop interno
            }
            
            // Se chegou aqui, algo está errado - usar break como segurança
            if (etapa >= 3) {
                printf("Movimento do Cavalo concluido!\n");
                break;
            }
        }
        
        // Condição para parar o loop externo após completar o movimento em L
        if (etapa >= 2) {
            break;
        }
    }
}

/* ==================== FUNÇÃO PRINCIPAL ====================*/

/**
 * Função principal que executa todos os movimentos das peças
 * Demonstra o uso de funções recursivas e loops complexos
 */
int main() {
    printf("========================================\n");
    printf("    DESAFIO MATECHECK - NIVEL MESTRE    \n");
    printf("========================================\n\n");
    
    // Movimentação do Bispo usando função recursiva
    printf("=== Movimentacao do Bispo (%d casas na diagonal direita para cima) ===\n", CASAS_BISPO);
    mover_bispo_recursivo(CASAS_BISPO);
    printf("Bispo movimentado com sucesso!\n\n");
    
    // Movimentação da Torre usando função recursiva
    printf("=== Movimentacao da Torre (%d casas para a direita) ===\n", CASAS_TORRE);
    mover_torre_recursivo(CASAS_TORRE);
    printf("Torre movimentada com sucesso!\n\n");
    
    // Movimentação da Rainha usando função recursiva
    printf("=== Movimentacao da Rainha (%d casas para a esquerda) ===\n", CASAS_RAINHA);
    mover_rainha_recursivo(CASAS_RAINHA);
    printf("Rainha movimentada com sucesso!\n\n");
    
    // Movimentação do Cavalo usando loops aninhados complexos
    mover_cavalo_complexo();
    printf("Cavalo movimentado com sucesso!\n\n");
    
    printf("========================================\n");
    printf("    TODOS OS MOVIMENTOS CONCLUIDOS!    \n");
    printf("========================================\n");
    
    return 0;
}

