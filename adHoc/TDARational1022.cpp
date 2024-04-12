#include <iostream>
#include <stdio.h>
#include <chrono>

using namespace std;
using namespace chrono;

int main(){
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    unsigned long long int n1, d1, n2, d2, rdivisor, rdividendo;
    int n;
    char operador;
    cin >> n;
    for(int i = 0; i < n; i++){
        scanf("%llu / %llu %c %llu / %llu", &n1, &d1, &operador, &n2, &d2);

        if(operador == '+'){
            rdividendo = n1 * d2 + n2 * d1;
            rdivisor = d1 * d2; 
            }
        else if(operador == '-'){
            rdividendo = n1 * d2 - n2 * d1;
            rdivisor = d1 * d2;
            }
        else if(operador == '*'){
            rdividendo = n1 * n2;
            rdivisor = d1 * d2;
        } else {
            rdividendo = n1 * d2;
            rdivisor = d1 * n2;
        }
        cout << rdividendo << "/" << rdivisor;
        for(int i = 2; i <= rdivisor; i++){
            if(rdividendo % i == 0 && rdivisor % i == 0){
                rdividendo /= i;
                rdivisor /= i;
                i = 2;
            }
            //cout << i << endl;
        }
        cout << " = "<< rdividendo << "/" << rdivisor << endl;
        }

    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double> tempoexcucao = duration_cast<duration<double>>(t2 - t1);
    cout.precision(8);
    cout <<  fixed << "tempo de excucao: " << tempoexcucao.count() << " segundos" << endl;
    return 0;
}