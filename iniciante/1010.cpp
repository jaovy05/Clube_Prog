#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int id, qtd;
    double price, total = 0;
    for(int i = 0; i < 2; i++){
        cin >> id >> qtd >> price;
        total += price * qtd;
    }
    cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << total << endl;

    return 0;
}