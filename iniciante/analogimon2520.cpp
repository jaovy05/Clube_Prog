#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int c, r, ranalogi, canalogi, rhuman, chuman;
    while(cin >> r >> c){
        int city[r][c];

        for(int i = 0; i < r; i++)
            for(int j = 0; j < c; j++){
                cin >> city[i][j];

                if(city[i][j] == 1){
                    rhuman = i;
                    chuman = j;
                } else if(city[i][j] == 2){
                    ranalogi = i;
                    canalogi = j;
                }}

        cout << abs(ranalogi - rhuman) + abs(canalogi - chuman) << endl;
        }
    return 0;
}       