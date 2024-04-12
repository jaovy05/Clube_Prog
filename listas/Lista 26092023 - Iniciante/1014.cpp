#include <iostream>

using namespace std;

int main(){
    int distance;
    double consumption, consumptionme;
    cin >> distance;
    cin >> consumption;
    consumptionme = distance / consumption;
    cout.precision(3);
    cout << fixed << consumptionme << " km/l\n";
    return 0;
}