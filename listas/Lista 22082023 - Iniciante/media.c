#include <stdio.h>

int main() {
    float n1, n2, n3, n4, n5, md;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    md = n1 * 0.2 + n2 * 0.3 + n3 * 0.4 + n4 * 0.1;
    printf("Media: %.1f\n", md);  
    if(md >= 7.0) printf("Aluno aprovado.\n");
    else if (md < 5.0) printf("Aluno reprovado.\n");
    else{
        printf("Aluno em exame.\n");
        scanf("%f", &n5);
        printf("Nota do exame: %.1f\n", n5);
        md = (md + n5)/2;
        if (md < 5.0) printf("Aluno reprovado.\n");
        else printf("Aluno aprovado.\n");
        printf("Media final: %.1f\n", md);
    }
    return 0;
}