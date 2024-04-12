#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    cout << fixed << setprecision(3) << "Volume = " << 4.0/3.0 * 3.14159 * pow(n, 3) << endl;
    return 0;
}