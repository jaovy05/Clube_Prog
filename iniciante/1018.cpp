#include <iostream>

using namespace std;

int main(){
    int qtdNotas[7] = {0}, valorNotas[7] = {1, 2, 5, 10, 20, 50, 100} ;
    int n, copiaN, i = 6;
    cin >> n;
    copiaN = n;
    while (n > 0){
        if(n >= valorNotas[i]){
            n -= valorNotas[i];
            qtdNotas[i]++; 
        } else {
            i--;
        }
    }
    cout << copiaN << endl;
    for (i = 6; i >= 0; i--){
        cout << qtdNotas[i] << " nota(s) de R$ " << valorNotas[i] << ",00"<< endl;
    }
    
    
    return 0;
}