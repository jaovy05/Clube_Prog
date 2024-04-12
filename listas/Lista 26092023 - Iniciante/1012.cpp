#include <iostream>
#include <cmath>
using namespace std;

double pi = 3.14159;

int main(){
    double a, b, c;
    cin >> a >> b >> c;
    cout.precision(3);
    cout << "TRIANGULO: " << fixed << (a * c)/ 2 << endl;
    cout << "CIRCULO: " << fixed << pi * pow(c, 2) << endl;
    cout << "TRAPEZIO: " << fixed << ((a + b) * c) / 2 << endl;
    cout << "QUADRADO: " << fixed << pow(b, 2) << endl;
    cout << "RETANGULO: " << fixed << a * b << endl;
    return 0;
}       