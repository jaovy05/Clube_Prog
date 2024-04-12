#include <iostream>

using namespace std;

const int n = 5;

int main(){
    int cha, constentans[n], acerto = 0;

    cin >> cha;
    for(int i = 0; i < n; i++)  cin >> constentans[i];

    for(int i = 0; i < n; i++)
        if(cha == constentans[i]) acerto++;
    
    cout << acerto << endl;
    return 0;
}
