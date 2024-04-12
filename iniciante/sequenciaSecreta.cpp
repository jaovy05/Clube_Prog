#include <iostream>

using namespace std;

int main(){
    int k, count = 1, last = 1;
    cin >> k;
    int sequen[k];
    
    for (int i = 0; i < k; i++) cin >> sequen[i];

    for (int i = 1; i < k; i++)  
        if(last != sequen[i]){
            count++;
            last = sequen[i];
        }
    cout << count << endl;
    return 0;
}