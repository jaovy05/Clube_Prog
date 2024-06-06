#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>

using namespace std;

string apagar(int* i, string s){
    int j = *i;
    for(; s[j] != '\0' ; j++) s[j] = s[j+1];
    *i -= 1;
    return s;
};

int main(){
    string s;
    char alvo;

    cin >> alvo >> s;
    while(  alvo != '0'){
        for (int i = 0; i < s.length(); i++)
            if(s[i] == alvo) s = apagar(&i, s);

        for (int i = 0; s[i] == '0'; i++) s = apagar(&i, s);
        
        if(s[0] == '\0') cout << 0 << endl;
        else printf("%s\n", s.c_str());
        
        cin >> alvo >> s;
    }
    return 0;
}