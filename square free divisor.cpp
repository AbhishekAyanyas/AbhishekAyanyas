#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


class InputHandler {
public:
    int N; 
};


class DivisorCalculator {
public:
    vector<int> divisors;
};


class PerfectSquareChecker {
public:
    bool divisibleByPer
};


class SquareFreeChecker {
public:
    bool isSquareFree; 
};
class OutputHandler {
public:
    int result; 
};

int main() {
    
    InputHandler inputHandler;
    DivisorCalculator divisorCalculator;
    PerfectSquareChecker perfectSquareChecker;
    SquareFreeChecker squareFreeChecker;
    OutputHandler outputHandler;

    cin >> inputHandler.N;

    
    for (int i = 1; i <= sqrt(inputHandler.N); i++) {
        if (inputHandler.N % i == 0) {
            divisorCalculator.divisors.push_back(i);
            if (i != inputHandler.N / i) {
                divisorCalculator.divisors.push_back(inputHandler.N / i);
            }
        }
    }

    outputHandler.result = 0;

    
    for (int divisor : divisorCalculator.divisors) {
        if (divisor == 1) continue; 

        
        perfectSquareChecker.divisibleByPerfectSquare = false;
        for (int i = 2; i <= sqrt(divisor); i++) {
            if (divisor % (i * i) == 0) {
                perfectSquareChecker.divisibleByPerfectSquare = true;
                break;
            }
        }

        
        squareFreeChecker.isSquareFree = !perfectSquareChecker.divisibleByPerfectSquare;

        if (squareFreeChecker.isSquareFree) {
            outputHandler.result++;
        }
    }


    cout << outputHandler.result << endl;

    return 0;
}

