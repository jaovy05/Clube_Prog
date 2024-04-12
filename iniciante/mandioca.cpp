#include <iostream>

using namespace std;

int main(){
    int n, grama = 225;
    int porcao[5] = {300, 1500, 600, 1000, 150};
    for(int i = 0; i < 5; i++){
        cin >> n;
        grama += n * porcao[i];
    }
    cout << grama << endl;
    return 0;
}