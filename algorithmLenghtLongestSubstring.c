#include <stdio.h>

int lengthOfLongestSubstring(char* s) {
    /*
    O que esse algortimo faz é rastrear com uma janela movel o tamanho da string sem caracteres repetidos. Entao, para cada valor na string nao repetido, ele aumenta o tamanho da janela e registra o tamanho. Quando encontra um caractere repetido, o inicio da janela pula uma posição para frente do valor repetido, reduzindo o tamanho da janela. O maior tamanho de janela será registrado como a maior substring.

    ex: "aeioau"
    a janela começa no a e vai aumentando: a -> ae -> aei -> aeio -> agora achou o "a" repetido -> eioa
    
    ex2: "aeii"
    a janela começa no a e vai aumentando: a -> ae -> aei -> agora achou o "i" repetido -> recomeça com i
    */
    // Só precisa rastrear a última posição de cada caractere ASCII possível
    int ultimaPosicao[128];  // 128 caracteres ASCII
    
    // Inicializa todas as posições como -1 (não visto ainda)
    for (int i = 0; i < 128; i++) {
        ultimaPosicao[i] = -1;
    }
    
    int maxComprimento = 0;
    int inicio = 0;
    
    for (int i = 0; s[i] != '\0'; i++) {
        char charAtual = s[i];
        
        // Se já vimos este caractere E ele está na janela atual: ele verifica se o char atual, se repetido, ele deve ter seu par repetido antes do inicio. Se for apos o inicio, a condição é verdadeira
        if (ultimaPosicao[charAtual] >= inicio) {
            inicio = ultimaPosicao[charAtual] + 1; // aqui ele define que o novo inicio é na posição seguinte ao ultimo elemento repetido encontrado
        }
        
        ultimaPosicao[charAtual] = i; //bota o valor de i na posição que está verificando. Entao o char dessa posicao do array charAtual nao vai mais valer -1, vai valer o valor de i
        
        int comprimentoAtual = i - inicio + 1; //faz a soma do currSequence
        if (comprimentoAtual > maxComprimento) {
            maxComprimento = comprimentoAtual;
        }
    }
    
    return maxComprimento;
}

int main (void) {
    char* sequencia=  "hijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789hijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789hijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789hijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789hijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789hijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    printf("Resultado: %i", lengthOfLongestSubstring(sequencia));

}