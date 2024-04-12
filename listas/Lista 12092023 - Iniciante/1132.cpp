#include <iostream>

using namespace std;

int main(){
    int start, end, x, y, total =  0;
    cin >> x;
    cin >> y;

    if(x > y){
        start = y;
        end = x;
    } else {
        start = x;
        end = y;
    }

    for(; start <= end; start++) 
        if(start % 13 != 0) total += start;
    cout << total << endl;
    return 0;
}       