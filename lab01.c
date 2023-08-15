#include <stdio.h>
#define MAX 10000

int consecutivos() {

}

int main() {
    int vendas; 
    int cinco = 0, sete = 0, dez = 0;
    int mais_consecutiva;
    scanf ("%d", &vendas);

    int aux;
    for (int i = 0; i < vendas; i++) {
        scanf ("%d", &aux);

        if (aux == 5){
            cinco++;
        }
        else if (aux == 7) {
            sete++;
        }
        else if (aux == 10) {
            dez++;
        }

        if (i < vendas - 1) {
            scanf (" ");
        }
    }
    printf ("James vendeu %d saladas de 5 reais, %d de 7 reais e %d de 10 reais.\n", cinco, sete, dez);
    printf ("James vendeu %d saladas de %d reais consecutivamente.\n", mais_consecutiva, cinco);
    return 0;
}