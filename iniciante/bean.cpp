#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
const int n = 4;

int main(){
    vector <int> copos;
    int f;
   
    for(int i = 0; i < n; i++) {
        cin >> f;
        copos.push_back(f);
        }

    vector <int>::iterator feijao = find(copos.begin(), copos.end(), 1);

    cout << distance(copos.begin(), feijao) + 1 << endl; 
    return 0;
}       