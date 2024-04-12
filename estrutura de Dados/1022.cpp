#include <iostream>
#include <stdio.h>
using namespace std;

int mdc(int a, int b){
    if(a % b == 0 || b == 1) return b;
    return mdc(b, a%b);
}

int main(){
    int nume1, deno1, nume2, deno2, numeR, denoR, divComun, n;
    char op;
    scanf("%d", &n);
        for(int i = 0; i < n; i++){
        scanf("%d / %d %c %d / %d", &nume1, &deno1, &op, &nume2, &deno2);
        for(int i = 0; i < 4; i++){
            if(op == '+') {
                numeR = nume1 * deno2 + nume2 * deno1;
                denoR = deno2 * deno1;
            } else if(op == '-'){
                numeR = nume1 * deno2 - nume2 * deno1;
                denoR = deno2 * deno1;
            }else if(op == '*'){
                numeR = nume1 * nume2;
                denoR = deno2 * deno1;
            }else {
                numeR = nume1 * deno2;
                denoR = nume2 * deno1;
            }
        }
        divComun = abs(mdc(numeR, denoR));
        printf("%d/%d = %d/%d\n", numeR, denoR, numeR / divComun, denoR / divComun);
    }
    return 0;
}