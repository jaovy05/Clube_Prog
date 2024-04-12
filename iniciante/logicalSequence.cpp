#include <iostream>
#include <math.h>

using namespace std;

int main(){
    long long int n;
    cin >> n;
    for(long long int i = 1; i <= n; i++){
        cout.precision(0);
        cout << fixed << i << " " << pow(i,2) << " " << pow(i,3) << endl
        << i << " " << pow(i, 2) + 1 << " " << pow(i,3) + 1 << endl;
    }
    return 0;
}