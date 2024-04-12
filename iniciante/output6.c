#include <stdio.h>
#include <string.h>

int main() {
    char n[50] = "AMO FAZER EXERCICIO NO URI";

    printf("<%s>\n", n);
    printf("<%30s>\n", n);
    printf("<%.20s>\n", n);
    printf("<%-20s>\n", n);
    printf("<%-30s>\n", n);
    printf("<%.30s>\n", n);
    printf("<%30.20s>\n", n);
    printf("<%-30.20s>\n", n);

    return 0;
}