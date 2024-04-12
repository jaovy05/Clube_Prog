#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


struct acougue{
    string carne;
    int vencimento;
};

bool menor(acougue a, acougue b){
    return a.vencimento < b.vencimento;
}
int main(){
    int n;
    while (cin >> n){
        acougue carnes[n];
        for(int i = 0; i < n; i++)
            cin >> carnes[i].carne >> carnes[i].vencimento;
        sort(carnes, carnes + n, menor);

        bool p = true;
        for(acougue c : carnes){
            if(!p) cout << " ";
            p = false;
            cout << c.carne;
            }
        cout << endl;
    }
    
    return 0;
}