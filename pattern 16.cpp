#include <iostream>
using namespace std;

int main() {
    int row;
    
    cout << "Enter the number of rows: ";
    cin >> row;

    // Loop for each row
    for (int i = 1; i <= row; i++) {
        
        // First loop prints numbers starting from i to (row)
        for (int j = 1; j < i; j++) {
            cout << j;
        }

        // Second loop prints the number 'i' for the remaining places
        
        for (int j = i; j <= row; j++) {
            cout << i;
        }
        
        cout << endl; // Move to the next row
    }
    
    return 0;
}
