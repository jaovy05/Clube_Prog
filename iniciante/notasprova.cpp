#include <iostream>

using namespace std;

struct NotasProva
{
    char notadig;
    int nota;
};

int main() {
    int nota;
    NotasProva notas[5] = {{'A', 85}, {'B', 60}, {'C', 35}, {'D', 0}, {'E', -1}};

    cin >> nota;
    
    for(int i = 0; i < 5; i++) 
        if(nota > notas[i].nota){
            cout << notas[i].notadig << endl;
            break;
        }

    return 0;
}