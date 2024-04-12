#include <stdio.h>

int main() {
    int qtd, n, out = 0, in = 0;
    scanf("%d", &qtd);
    for(int i = 0; i < qtd; i++){
        scanf("%d", &n);
        if(n >= 10 && n <= 20)  in++;
        else out++;
    }
    printf("%d in\n", in);
    printf("%d out", out);
    return 0;
}