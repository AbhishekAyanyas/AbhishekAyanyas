#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

class MinProductCalculator {
public:
    void calculate() {
        
        vector<int> arr = {198, 76, 544, 123, 154, 675};
        int k = 2; 

        
        sort(arr.begin(), arr.end());

        
        long long product = 1;
        for (int i = 0; i < k; ++i) {
            product *= arr[i];
        }

    
        cout << "Minimum product: " << product << std::endl;
    }
};

int main() {
    MinProductCalculator calculator;
    calculator.calculate();
    return 0;
}

