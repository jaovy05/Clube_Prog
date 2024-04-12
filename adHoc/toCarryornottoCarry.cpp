#include <iostream>
#include <bitset>

using namespace std;
const int n = 32;

int binForDex(string bin){
    int soma = 0, multi = 1;

    for(int i = n - 1; i >= 0; i--, multi *= 2)
        if(bin[i] == '1') soma += multi; 
    
    return soma;
}

int main(){
    unsigned long int n1, n2, somai;
    string bin1, bin2, soma;
    
    while(cin >> n1 >> n2){
        bin1 = bitset<n>(n1).to_string();
        bin2 = bitset<n>(n2).to_string();

        for(int i = 0; i < n; i++){
            if(bin1[i] == bin2[i]) soma += '0';
            else soma += '1';
        }
        somai = binForDex(soma);   
        soma = "";

        cout << somai << endl;
    }
    return 0;
}