#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
    int linhas, max;

    max = 0;
    cin >> linhas;
    string frase[linhas];

    for(int i = 0; i < linhas; i++){
        getline(cin, frase[i]);
        frase[i].erase(0, frase[i].find_first_not_of(' '));
        frase[i].erase(frase[i].find_last_not_of(' ') + 1);
        frase[i].erase(unique(frase[i].begin(), frase[i].end(), 
                    [] (char a, char b) {return a == ' ' && b == ' ';}), frase[i].end());

        if(frase[i].length() > max) max = frase[i].length();
    }

    for(int i = 0; i < linhas; i++)  cout << setw(max) << frase[i] << endl;
    
    return 0;
}   