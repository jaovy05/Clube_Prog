#include <stdio.h>

int main() {
    char quadra[2][2] = {{'2', '1'}, {'3', '4'}};
    float x, y;
    int l = 0, c = 0;

    scanf("%f %f", &x, &y);
    if(x == 0 && y == 0)
        printf("Origem");
    else if(x == 0)
        printf("Eixo Y");
    else if(y == 0)
        printf("Eixo X");
    else{
        if(y < 0.0 ) l = 1;
        if(x > 0.0) c = 1;
        printf("Q%c", quadra[l][c]);
    }
    printf("");
    return 0;

} 