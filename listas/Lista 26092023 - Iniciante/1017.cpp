#include <iostream>

using namespace std;

int main(){
    int time, speed;
    cin >> time >> speed;
    cout.precision(3);
    cout << fixed << (double) (time * speed)/ 12.0 << endl;
    return 0;
}