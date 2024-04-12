#include <stdio.h>

int main() {
    double sal, tax = 0;
    scanf("%lf", &sal);
    double valtaxes[4] = {2000, 1000, 1500, sal};
    double portaxes[4] ={0.0, 0.08, 0.18, 0.28};

    for(int i = 0; i < 4; i++){
        if(sal <= 0) break;

        if(sal < valtaxes[i])   tax += sal * portaxes[i];
        else tax += valtaxes[i] * portaxes[i];

        sal -= valtaxes[i];
    }

    if(tax == 0) printf("Isento");
    else printf("R$ %.2f", tax);
    
    return 0;
}