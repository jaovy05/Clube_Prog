#include <iostream>

using namespace std;

int euclides(int a, int b){
    if(b == 0) return a;
    return euclides(b, a % b);
}

int main(){
    int n, cartaR, cartaV;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> cartaR >> cartaV;
        cout << euclides(cartaR, cartaV) << endl;
    }
    return 0;
}