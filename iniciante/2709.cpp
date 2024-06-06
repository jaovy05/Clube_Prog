#include <iostream>
#include <math.h>

using namespace std;

#define win "You’re a coastal aircraft, Robbie, a large silver aircraft.\n"
#define lose "Bad boy! I’ll hit you.\n"

bool primo(int k){
    if(k % 2 == 0 && k != 2 || k == 1) return false;
    for(int i = 3; i <= sqrt(k); i += 2)
        if(k % i == 0) return false;
    return true;
}

int main(){
    int m, n, total;
    while(cin >> m){
        total = 0;
        int v[m];

        for(int i = 0; i < m; i++) cin >> v[i];
        cin >> n;
        for(int i = m - 1; i >= 0; i -= n) total += v[i]; 

        if(primo(total)) cout << win;
        else cout << lose;
        return 0;}
}