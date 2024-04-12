#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string ddd[8] = {"61", "71", "11", "21", "32", "19", "27", "31"};
    string estado[8] = {"Brasilia", "Salvador", "Sao Paulo", "Rio de Janeiro", "Juiz de Fora", "Campinas", "Vitoria", "Belo Horizonte"};
    vector<string> DDD(ddd, ddd + 8);
    string busca;

    cin >> busca;
    auto itera = find(DDD.begin(), DDD.end(), busca);
    if(itera != DDD.end()){
        int i = distance(DDD.begin(), itera);
        cout << estado[i] << endl;
    } else cout << "DDD nao cadastrado" << endl;

    return 0;
}