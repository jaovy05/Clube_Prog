#include <iostream>

using namespace std;

int findSurvive(int people, int step){
    if(people == 1) return 1;
    return (findSurvive(people - 1, step) +  step - 1) % people + 1;
}

int main(){
    int n, people, step;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> people >> step;
        cout << "Case " << i << ": " << findSurvive(people, step) << endl;  
    }

    return 0;
}