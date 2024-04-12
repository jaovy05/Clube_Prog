#include <stdio.h>

int main() {
    int ihour, imin, fhour, fmin, dhour, dmin;
    scanf("%d %d %d %d", &ihour, &imin, &fhour, &fmin);

    if (fmin - imin < 0){
        dmin =  fmin - imin + 60;
        fhour--;
    } else dmin = fmin - imin;

    if (fhour - ihour < 0) dhour = fhour - ihour + 24;
    else dhour = fhour - ihour;

    if(dhour == 0 && dmin == 0) dhour = 24;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", dhour, dmin);
    return 0;
}