#include <iostream>

using namespace std;

long int factorial(int n){
    if(n == 1) return 1;
    return n * factorial(n - 1);
}

int main(){
    long int fact;
    cin >> fact;
    cout << factorial(fact) << endl;
    return 0;
}