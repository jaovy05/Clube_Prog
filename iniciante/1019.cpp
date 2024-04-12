#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int n;
    int tempo[3], convertSeg[3] = {3600, 60, 1};
    cin >> n;
    for(int i = 0; i < 3; i++){
        tempo[i] = n/convertSeg[i];
        n -= tempo[i] * convertSeg[i];
    }
    
    printf("%d:%d:%d", tempo[0], tempo[1], tempo[2]);
    return 0;
}