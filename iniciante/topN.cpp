#include <iostream>

using namespace std;

int main(){
    int pos;
    int tops[7] = {1, 3, 5, 10, 25, 50, 100};
    cin >> pos;

    for(int i = 0; i < 7; i++)
        if(pos <= tops[i]){
            cout << "Top " << tops[i] << endl; 
            break;
        }
    return 0;
}