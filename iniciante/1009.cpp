#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string nome;
    double salaryF, sold;
    cin >> nome >> salaryF >> sold;
    cout << fixed << setprecision(2) << "TOTAL = R$ " << salaryF + sold * 0.15 << endl;
    
    
    return 0;
}