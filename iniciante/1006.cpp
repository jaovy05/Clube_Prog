#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float x, y, z;
    cin >> x >> y >> z;
    cout << fixed << setprecision(1) << "MEDIA = " << x * 0.2 + y * 0.3 + z * 0.5 << endl;

    return 0;
}