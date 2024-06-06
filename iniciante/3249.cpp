#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int n, win = 0;
    string batalha;
    cin >> n;
    win = n;
    for(int i = 0; i < n; i++){
        cin >> batalha;
        for(int j = 0; j < batalha.length() - 1; j++)
            if(batalha[j] == 'C' && batalha[j + 1] == 'D'){
               win--;
               break;       
            }               
    }
    cout << win << endl;

    return 0;
}