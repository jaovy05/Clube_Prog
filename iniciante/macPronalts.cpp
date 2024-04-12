#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct macPronalts
{
    string c;
    float v; 
};

int main(){
    int n, qtd;
    float total = 0;
    macPronalts code; 
    vector<macPronalts> lanches;
    lanches.push_back({"1001", 1.5});
    lanches.push_back({"1002", 2.5});
    lanches.push_back({"1003", 3.5});
    lanches.push_back({"1004", 4.5});
    lanches.push_back({"1005", 5.5});

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> code.c >> qtd; 

        auto pedido = find_if(lanches.begin(), lanches.end(), [&](const macPronalts &elem){
            return elem.c == code.c;
        });
        total += pedido->v * qtd;
    }
    
    cout.precision(2);
    cout << fixed << total << endl;
    return 0;
}   