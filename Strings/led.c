#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int totalled, qtdpanel;
    int led[10] = {2, 5, 5, 4, 5, 6, 3, 7, 6, 6};
    char num[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
    char* panel = (char *)malloc(30 * sizeof(char));
    scanf("%d", &qtdpanel);

    for(int c = 0; c < qtdpanel; c++){ 
        totalled = 0;   
        scanf("%s", panel);
        for(int i = 0; panel[i] != '\0'; i++)
            for(int j = 0; j < 10; j++)
                if(panel[i] == num[j])  totalled += led[j];
        printf("%d leds\n", totalled);        
    } 
    return 0;
}   