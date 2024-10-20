#include <iostream>
#include <string>
using namespace std;


bool isPalindrome(string s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int T; 
    cin >> T;
    
    while (T--) {
        string S;
        cin >> S;  
        int n = S.length();
        bool found = false;
        
        
        for (int shifts = 0; shifts < n; shifts++) {
            if (isPalindrome(S)) {
                cout << shifts << endl;
                found = true;
                break;
            }
            
            S = S.substr(1) + S[0];
        }
        
        if (!found) {
            cout << -1 << endl;
        }
    }
    
    return 0;
}

