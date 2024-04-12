#include <stdio.h>

int main (){
    int idia, ihora, imin, iseg,
        fdia, fhora, fmin, fseg,
        ddia, dhora, dmin, dseg;
    scanf("Dia %d", &idia);
    scanf("\n%d : %d : %d", &ihora, &imin, &iseg);
    scanf("\nDia %d", &fdia);
    scanf("\n%d : %d : %d", &fhora, &fmin, &fseg);
    
    if (fseg - iseg < 0) {
        dseg = fseg - iseg + 60;
        fmin --;
    } else dseg = fseg - iseg;

    if (fmin - imin < 0){
        dmin = fmin - imin + 60;
        fhora--;
    } else dmin = fmin - imin;

    if (fhora - ihora < 0){
        dhora = fhora - ihora + 24;
        fdia--;
    } else dhora = fhora - ihora;

    ddia = fdia - idia;

    printf("%d dia(s)\n", ddia);
    printf("%d hora(s)\n", dhora);
    printf("%d minuto(s)\n", dmin);
    printf("%d segundo(s)\n", dseg);
    return 0;
}