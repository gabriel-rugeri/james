#include <stdio.h>

int encontra_maior(int array[]) {
    // Retorna o índice do mais consecutivo
    int maior = 0;
    for (int i = 1; i < 3; i++) {
        if (array[i] > array[maior]) {
            maior = i;
        }
    }
    return maior;
}


void mais_consecutivo (int array[], int length, int resultado[]) {
    int sequencias[3] = {0}; // vetor para sequencias de 5, 7, 10
    int contador_5 = 0, contador_7 = 0, contador_10 = 0;

    for (int i = 0; i < length; i++) {
        if (array[i] == 5) {
            contador_5++;
            contador_7 = 0;
            contador_10 = 0;
            if (contador_5 > sequencias[0]) {
                sequencias[0] = contador_5;
            }
        } else if (array[i] == 7) {
            contador_5 = 0;
            contador_7++;
            contador_10 = 0;
            if (contador_7 > sequencias[1]) {
                sequencias[1] = contador_7;
            }
        } else if (array[i] == 10) {
            contador_5 = 0;
            contador_7 = 0;
            contador_10++;
            if (contador_10 > sequencias[2]) {
                sequencias[2] = contador_10;
            }
        }
    }
    
    int maior = encontra_maior(sequencias);
    if (maior == 0) {
        resultado[0] = 5;
    } else if (maior == 1) {
        resultado[0] = 7;
    } else if (maior == 2) {
        resultado[0] = 10;
    }
    resultado[1] = sequencias[maior];
}


int main() {
    int num_vendas;
    scanf("%d", &num_vendas);
    int valor_5 = 0, valor_7 = 0, valor_10 = 0;
    int vendas[num_vendas];

    // Leitura da sequencia de vendas
    for (int i = 0; i < num_vendas; i++) {
        scanf("%d", &vendas[i]);

        if (vendas[i] == 5) {
            valor_5++;
        } else if (vendas[i] == 7) {
            valor_7++;
        } else if (vendas[i] == 10) {
            valor_10++;
        }
    }

    int consecutivos[2];
    mais_consecutivo(vendas, num_vendas, consecutivos);

    printf("James vendeu %d saladas de 5 reais, %d de 7 reais e %d de 10 reais.\n", valor_5, valor_7, valor_10);
    printf("James vendeu %d saladas de %d reais consecutivamente.\n", consecutivos[1], consecutivos[0]);
    return 0;
}