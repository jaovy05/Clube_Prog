#include <stdio.h>

int main() {
    int a, b, d;
    scanf("%d %d", &a, &b);
    if(a > b) {
        d = a/b;
        if(a == d*b)
            printf("Sao Multiplos\n");
        else
            printf("Nao sao Multiplos\n");
    }
    else {
        d = b/a;
        if(b == d*a)
            printf("Sao Multiplos\n");
        else
            printf("Nao sao Multiplos\n");
        }
    return 0;
}