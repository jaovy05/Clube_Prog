#include <stdio.h>

int main() {
    int p = 0;
    float n;
    for(int i = 0; i < 6; i++){
        scanf("%f", &n);
        if(n > 0.0) p++;
    }
    printf("%d valores positivos", p);
    return 0;
}   