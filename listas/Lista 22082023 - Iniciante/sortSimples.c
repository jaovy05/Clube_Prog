#include <stdio.h>

int main() {
    int vet[3], vetordenado[3];
    int i, temp;
    for(i = 0; i < 3; i++){
        scanf("%d", &vet[i]);
        vetordenado[i] = vet[i];
        }
    for(i = 0; i < 3; i++)
        for(int j = 0; j < 2 -i; j++)
            if(vetordenado[j] > vetordenado[j + 1]){
                temp = vetordenado[j+1];
                vetordenado[j+1] = vetordenado[j];
                vetordenado[j] = temp;
            }
    for(i = 0; i < 3; i++)
        printf("%d\n", vetordenado[i]);
    for(i = 0; i < 3; i++)
        printf("\n%d", vet[i]);
    return 0;
}