#include <iostream>
using namespace std;

int main() {
    int row, col;
    
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;

    
    for (int i = 0; i < row; i++) {
        if (i % 2 == 0) {
    
            for (int j = 1; j <= col; j++) {
                cout << j << " ";
            }
        } else {
            
            for (int j = col; j >= 1; j--) {
                cout << j << " ";
            }
        }
        cout << endl;  
    }

    return 0;
}

