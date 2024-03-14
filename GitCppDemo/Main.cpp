#include <iostream>

using namespace std;

unsigned long long factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        // Recursive case: factorial(n) = n * factorial(n-1)
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    cout << "Enter a non-negative integer: ";
    cin >> num;

    // Check for negative input (factorials are not defined for negative numbers)
    if (num < 0) {
        cout << "Error: Factorial is not defined for negative numbers. :(" << endl;
    }
    else {
        unsigned long long result = factorial(num);
        cout << "The factorial of " << num << " is " << result << endl;
    }

    return 0;
}
