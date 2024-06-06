#include <iostream>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s;
        if(s[0] == 'P') cout << "skipped\n";
        else 
            for(int j = 1; j < 4; j++)
                if(s[j] == '+'){
                    int a = stoi(s.substr(0, j));
                    int b = stoi(s.substr(j+1));
                    cout << a + b << endl;
                }    
    }
    return 0;
}