#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "(*))";  
    int low = 0;  
    int high = 0; 
    
    
    for (char c : s) {
        if (c == '(') {
            low++;  
            high++; 
        }
        else if (c == ')') {
            low--;  
            high--; 
        }
        else {  
            low--;  
            high++; 
        }
        if (low < 0) {
            low = 0;
        }

    
        if (high < 0) {
            cout << "The string is not valid!" << endl;
            return 0;
        }
    }
    
    if (low == 0) {
        cout << "The string is valid!" << endl;
    } else {
        cout << "The string is not valid!" << endl;
    }
    
    return 0;
}

