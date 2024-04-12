#include <iostream>

using namespace std;

int main(){
    int n;
    for(int i = 0; i < 10; i++){
        cin >> n;
        if(n <= 0) cout << "x[" << i << "] = 1" << endl;
        else cout << "x[" << i << "] = " << n << endl;
    }
    return 0;
}   