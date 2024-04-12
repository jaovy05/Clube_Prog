#include <iostream>

using namespace std;

int main(){
    int dias;
    cin >> dias;
    cout << dias / 365 << " ano(s)\n";
    dias -= 365 * (dias / 365);
    cout << dias / 30 <<  " mes(es)\n";
    dias -= 30 * (dias / 30);
    cout <<  dias << " dia(S)\n";
    return 0;
}