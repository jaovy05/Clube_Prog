#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float x, y;
    cin >> x >> y;
    cout << fixed << setprecision(5) << "MEDIA = " << (x * 3.5 + y * 7.5)/11 << endl;

    return 0;
}