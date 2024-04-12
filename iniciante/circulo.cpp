#include <iostream>
#include <math.h>   

using namespace std;

int main(){
    double pi = 3.14159, r;
    cin >> r;
    cout.precision(4);
    cout << "A=" << fixed << pi * pow(r,2) << endl;
    return 0;
}