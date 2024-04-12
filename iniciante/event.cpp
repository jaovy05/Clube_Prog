#include <iostream>

using namespace std;

int main(){
    unsigned long int xp;
    int incre;
    
    do{
        cin >> xp >> incre;
        if(xp != 0 && incre !=0)cout << xp * incre << endl;
    } while (incre != 0 && xp != 0);
    
    return 0;
}   