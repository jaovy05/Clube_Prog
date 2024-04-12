#include <iostream>

using namespace std;

int main(){
    int competitors, paper, qtdpaper;

    cin >> competitors >> paper >> qtdpaper;

    if(paper >= competitors * qtdpaper) cout << "S\n";
    else cout << "N\n";
    
    return 0;
}