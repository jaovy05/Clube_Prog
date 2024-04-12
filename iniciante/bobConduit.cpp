#include <iostream>

using namespace std;

int main(){
    int qtdRaios, r1, r2;

    cin >> qtdRaios;

    for(int i = 0; i < qtdRaios; i++){
        cin >> r1 >> r2;
        cout << r1 + r2 << endl;
    }
    return 0;   
}