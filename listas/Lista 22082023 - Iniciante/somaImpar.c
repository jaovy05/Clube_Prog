#include <stdio.h>

int main() {
    int x, y, soma = 0;
    scanf("%d", &y);
    scanf("%d", &x);
    for(int i = x + 1; i < y; i++)
        if(i % 2 != 0)
            soma += i;
    printf("%d", soma);
    return 0;
}