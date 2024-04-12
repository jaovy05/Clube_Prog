#include <stdio.h>

int main() {
    float lanches[5] = {4, 4.5, 5, 2, 1.5};
    int id, qtd;
    scanf("%d %d", &id, &qtd);
    printf("Total: R$ %.2f", lanches[id-1]*qtd);
    return 0;
}