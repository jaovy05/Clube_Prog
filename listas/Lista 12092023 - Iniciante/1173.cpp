#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < 10; i++) 
        cout << "N[" << i << "] = " << n * pow(2,i) << endl;
    return 0;
}