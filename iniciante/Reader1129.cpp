#include <iostream>

using namespace std;

int main(){
    int questions, marcados;
    int tinta[5];
    char alternative;
    char alternatives[5] ={'A', 'B', 'C', 'D', 'E'};
    
    cin >> questions; 

    while (questions != 0)
    {
        for(int i = 0; i < questions; i++){
            marcados = 0;
            for(int j = 0; j < 5; j++){
                cin >> tinta[j];
                if(tinta[j] <= 127){
                    marcados++;
                    alternative = alternatives[j];
                }}
            if(marcados == 1) cout << alternative << endl;
            else  cout << "*" << endl;
        }
        cin >> questions; 
    }
    
    return 0;
}