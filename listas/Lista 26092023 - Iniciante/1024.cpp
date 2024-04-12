#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    string palavra;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        getline(cin, palavra);
        
        for(char &c : palavra)
            if(isalpha(c)) c += 3;
        
        reverse(palavra.begin(), palavra.end());

        for(int i = palavra.length()/2; i < palavra.length(); i++)  palavra[i] -= 1;
            
        cout << palavra << endl;
        }
    return 0;
}