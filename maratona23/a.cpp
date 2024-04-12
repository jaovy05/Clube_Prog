#include <iostream>

using namespace std;

int main(){
    int qtd, alt, pass = 0;
    cin >> qtd >> alt;
    int brin[qtd];

    for(int i = 0; i < qtd; i++)
        cin >> brin[i];

    for(int i = 0; i < qtd; i++)
        if(alt > brin[i]) pass++;

    cout << pass ;
    return 0;
}