#include <iostream>

using namespace std;

int main(){
    
    for(char out = 'A'; out <= 'E'; out++) {
        for (int i = 0; i < 'E' - out + 3; i++) cout << " ";
        cout << out;
        for (int i = 0; i < (out - 'A') * 2 - 1; i++) cout << " ";
        if(out != 'A') cout << out;
        cout << endl;
    }

    for (char out = 'D'; out >= 'A'; out--) {
        for (int j = 0; j < 'E' - out + 3; j++) cout << " ";
        cout << out;
        for (int j = 0; j < (out - 'A') * 2 - 1; j++) cout << " ";
        if (out != 'A') cout << out;
        cout << endl;
        }
    
    return 0;
}