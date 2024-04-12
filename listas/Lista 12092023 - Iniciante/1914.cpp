#include <iostream>

using namespace std;

int main(){
    string name1, name2, pick1, pick2;
    int n;
    long int n1, n2;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> name1 >> pick1 >> name2 >> pick2;
        cin >> n1 >> n2;
        if((n1 + n2) % 2 == 0){
            if(pick1 == "PAR") cout << name1 << endl;
            else cout << name2 << endl;
        } else {
            if(pick1 == "IMPAR") cout << name1 << endl;
            else cout << name2 << endl;
        }
    }
    return 0;
}       