
#include <iostream>
#include <string>

using namespace std;

void inpar(char* c){
    if(*c <= 90) *c += 32;
    
}

void par(char* c){
    if(*c >= 97) *c -= 32; 
}

int main(){
    string danci;
    while(getline(cin, danci)){
        int i = 0;
        bool ePar = true;

        for(i = 0; i < danci.length(); i++)
            if(danci[i] != 32){
                if(ePar) par(&(danci[i]));
                else inpar(&(danci[i]));
                ePar = !ePar;
            }

        cout << danci << endl;}
    
}