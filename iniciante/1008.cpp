#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int number, hours;
    double salaryH;
    cin >> number >> hours >> salaryH;
    cout << fixed << setprecision(2) << "NUMBER = " << number << "\nSALARY = U$ " << salaryH * hours << endl;
    return 0;
}