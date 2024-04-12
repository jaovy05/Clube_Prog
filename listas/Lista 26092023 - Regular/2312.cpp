#include <iostream>
#include <algorithm>

using namespace std;

struct Paises{
    string pais;
    int ouro, prata, bronze;
};

bool maior(Paises a, Paises b){
    if(a.ouro != b.ouro) return a.ouro > b.ouro;
    else if(a.prata != b.prata) return a.prata > b.prata;
    else if (a.bronze != b.bronze) return a.bronze > b.bronze;
    else return a.pais < b.pais;
}

int main(){
    int n;
    cin >> n;
    Paises competidores[n];
    for(int i = 0; i < n; i++) 
        cin >> competidores[i].pais >> competidores[i].ouro >> competidores[i].prata >> competidores[i].bronze;
    
    sort(competidores, competidores + n, maior);

    for(Paises p : competidores)  
        cout << p.pais << " " << p.ouro << " " << p.prata << " " << p.bronze << endl;
    return 0;
}