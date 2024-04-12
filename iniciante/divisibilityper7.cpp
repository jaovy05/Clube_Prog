#include <iostream>

using namespace std;

int main(){
    unsigned long long int n, lastdig, restdig;
    cin >> n;
    cout << n << endl;
    while(n >= 10){
        restdig = n / 10;
        lastdig =  n % 10;
        n = restdig * 3 + lastdig;
        cout << n << endl;
    }

    return 0;
}