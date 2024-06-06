#include <iostream>

using namespace std;

int main(){
    string year[12] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    int yearNum;
    cin >> yearNum;
    cout << year[yearNum - 1] << endl;
    return 0;
}