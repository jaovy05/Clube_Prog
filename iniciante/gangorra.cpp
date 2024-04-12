#include <iostream>

using namespace std;

int main(){
    int c1, c2, p1, p2, forca1, forca2;
    cin >> p1 >> c1 >> p2 >> c2;
    
    forca1 = p1 * c1;
    forca2 = p2 * c2;

    if(forca1 > forca2) cout << -1 << endl;
    else if (forca1 < forca2) cout << 1 << endl;
    else cout << 0 << endl;
    
    return 0;
}       