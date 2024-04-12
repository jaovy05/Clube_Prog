#include <stdio.h>

int main() {
    int i; 
    float sal;
    float tabsal[4] = {400, 800, 1200, 2000},
        incremento[5] = {15, 12, 10, 7, 4};
    scanf("%f", &sal);
    for(i = 0; i < 4; i++)
        if(sal <= tabsal[i])
            break;
    printf("Novo salario: %.2f\n", sal + sal * (incremento[i] / 100));
    printf("Reajuste ganho: %.2f\n", sal * (incremento[i] / 100));
    printf("Em percentual: %.0f %%\n", incremento[i]);
    return 0;
}   