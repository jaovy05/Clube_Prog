#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int intervals[4] = {25, 50, 75, 100};
    double n;
    scanf("%lf", &n);
    if(n > 100 || n < 0){
        printf("Fora de intervalo\n");
        return 0;
    } 

    for(int i = 0; i < 4; i++)
        if(intervals[i] >= n){
            printf("Intervalo %c%d,%d]\n", 91 - (int) (sqrt(i)) * 51, intervals[i] - 25, intervals[i]);
            break;
        } 
    
    return 0;
}