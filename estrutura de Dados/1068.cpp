#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    stack<char> pilha;
    string frase;
    bool correct;

    while(cin >> frase){
        correct = true;
        pilha = stack<char>();
        for(char c : frase){
            if(c == 40) pilha.push(c);
            else if(c == 41) 
                if(!pilha.empty()) pilha.pop();
                else {
                    cout << "incorrect" << endl;
                    correct = false;
                    break;}       
        }
        if(pilha.empty() && correct) cout << "correct" << endl;
        else if(correct) cout << "incorrect" << endl;
        }
    return 0;
}