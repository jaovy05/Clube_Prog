#include <iostream>

using namespace std;

int main(){
    int n, abas;
    string event;

    cin >> abas >> n;

    for(int i = 0; i < n; i++){
        cin >> event;
        if(event == "fechou") abas++;
        else abas--;
    }

    cout << abas << endl;
    return 0;
}