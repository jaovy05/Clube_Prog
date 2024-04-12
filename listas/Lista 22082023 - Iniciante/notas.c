#include <stdio.h>

typedef struct notas
{
    float v;
    int qtd;
}notas;

int main() {
    notas nota[12] = {{100, 0}, {50, 0}, {20, 0}, {10, 0}, {5, 0}, {2, 0}, 
        {1, 0}, {0.5, 0}, {0.25, 0},  {0.1, 0},  {0.05, 0},  {0.01, 0}};
    double valor;
    int i = 0;
    scanf("%lf", &valor);
    while (valor > 1e-3) {
    if(valor < 0.01){
        valor = 0;
        nota[11].qtd++;
    }
    else if(valor - nota[i].v > -1e-6) {
        valor -= nota[i].v;
        nota[i].qtd++;
    } 
    else i++;
    printf("%lf\n", valor);
    }
    printf("NOTAS:\n");
    for(i = 0; i < 6; i++) printf("%d nota(s) de R$ %.2f\n", nota[i].qtd, nota[i].v);
    printf("MOEDAS:\n");
    for(i = 6; i < 12; i++) printf("%d moeda(s) de R$ %.2f\n", nota[i].qtd, nota[i].v);
    return 0;
}