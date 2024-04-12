#include <stdio.h>

int main() {
    int sta, end;
    scanf("%d %d", &sta, &end);
    if(sta < end) printf("O JOGO DUROU %d HORAS(S)\n", end - sta);
    else printf("O JOGO DUROU %d HORAS(S)\n", 24 + end - sta);
    return 0;
}   