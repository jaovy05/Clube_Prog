#include <iostream>

using namespace std;

int main(){
    long int total = 0;
    int temp, vel, paradas;

    cin >> paradas;
    for(int i = 0; i < paradas; i++){
        cin >> temp >> vel;
        total += temp * vel;
    }
    cout << total << endl;
    return 0;
}