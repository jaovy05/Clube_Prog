#include <iostream>

using namespace std;

int main(){
    int powerStrip, total = 0;
    for(int i = 0; i < 4; i++){
        cin >> powerStrip;
        total += powerStrip;
    }
    cout << total - 3 << endl;fewfe
    return 0;
}