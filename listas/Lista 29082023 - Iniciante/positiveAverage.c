#include <stdio.h>

int main() {
    int p = 0; 
    float n, totalp = 0;
    for(int i = 0; i < 6; i++){
        scanf("%f", &n);
        if(n > 0.0){
            p++;
            totalp += n;
            }
    }
    printf("%d valores positivos\n", p);
    printf("%.1f\n", (float) totalp/p);
    return 0;
}   