#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int L, C;
    while (cin >> L >> C) {
        vector<vector<int>> grid(L, vector<int>(C));
        vector<int> row_order(L), col_order(C);
        
        // Ler a configuração dos contêineres
        for (int i = 0; i < L; i++) {
            for (int j = 0; j < C; j++) {
                cin >> grid[i][j];
                grid[i][j]--;  // Ajustar para índices 0-based
            }
        }
        
        // Verificar se as condições são satisfeitas
        bool possible = true;
        for (int i = 0; i < L; i++) {
            for (int j = 0; j < C; j++) {
                int value = grid[i][j];
                if (row_order[i] >= 0 && row_order[i] != value / C) {
                    possible = false;
                }
                if (col_order[j] >= 0 && col_order[j] != value % C) {
                    possible = false;
                }
                row_order[i] = value / C;
                col_order[j] = value % C;
            }
        }
        
        if (!possible) {
            cout << "*" << endl;
        } else {
            int swaps = 0;
            for (int i = 0; i < L; i++) {
                if (row_order[i] != i) {
                    swaps++;
                }
            }
            for (int j = 0; j < C; j++) {
                if (col_order[j] != j) {
                    swaps++;
                }
            }
            cout << swaps << endl;
        }
    }
    return 0;
}
