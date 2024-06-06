#include <iostream>

using namespace std;

int main(){
    string s;
    int x, y;
    while(cin >> s){ 
        long int tam = s.length();
        if(s[0] == 'J' || s[0] == 'R' ||s[0] == 'L'){
            for(int j = 3; j < tam; j++)
                if(s[j] == '='){
                    x = stol(s.substr(2, j));
                    y = stol(s.substr(j+1));
                    cout << y - x << endl;
                }    
        } else if(s[tam - 1] == 'J' || s[tam - 1] == 'R' || s[tam - 1] == 'L'){
            for(int j = 1; j < tam; j++)
                if(s[j] == '+'){
                    x = stol(s.substr(0, j));
                    y = stol(s.substr(j+1));
                    cout << y + x << endl;
                }    
        } else {
            for(int j = 0; j < tam; j++){
                if(s[j] == '+') x = stol(s.substr(0, j));
                else if (s[j] == '=') {
                    y = stol(s.substr(j+1));
                    cout << y - x << endl;
                }
            }
        }

        
    }
    return 0;
}