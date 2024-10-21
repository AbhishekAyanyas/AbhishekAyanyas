#include <iostream>
using namespace std;

void printParallelogram(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < cols; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    printParallelogram(rows, cols);

    return 0;

