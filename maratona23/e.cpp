#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int qtd, pos, sub, copmax;
    int* mai;
    cin >> qtd >> pos;
    int flores[qtd];
    for(int i = 0; i < qtd; i++) cin >> flores[i];
    for(int i = 0; i < pos; i++){
        mai = max_element(flores, flores + qtd);
        copmax = *mai;
        sub = 0;
        while (copmax > 0){
            sub += copmax % 10;
            copmax /= 10;
            }
        *mai -= sub;
    }
    cout << sub;
    return 0;
}