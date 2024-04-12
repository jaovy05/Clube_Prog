#include <iostream>

using namespace std;

struct romano{
    string simbolo;
    int valor;
    int sub;
};

int main(){
    romano alfabeto[7] = {{"I", 1, 0}, {"V", 5, 0}, {"X", 10, 0}, {"L", 50, 2}, {"C", 100, 2}, {"D", 500, 4}, {"M", 1000, 4}};
    int n, i = 6;
    string numromano = "";
    cin >> n;

    while(n > 0){
        if(alfabeto[i].valor <= n){
            numromano += alfabeto[i].simbolo;
            n -= alfabeto[i].valor;
        } else if (alfabeto[i].valor - alfabeto[alfabeto[i].sub].valor <= n){
            numromano += alfabeto[alfabeto[i].sub].simbolo;
            numromano += alfabeto[i].simbolo;
            n -= (alfabeto[i].valor - alfabeto[alfabeto[i].sub].valor);
        } else i--;
    }
    cout << numromano << endl;
    return 0;
}