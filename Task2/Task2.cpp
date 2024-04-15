#include <iostream>
using namespace std;

class Gcd {
private:
    int num1;
    int num2;

public:
    Gcd(int a, int b){
        num1 = a;
        num2 = b; 
    }

    int calculateGcd() const {
        int dividend = num1;
        int divisor = num2;
        while (divisor != 0) {
            int remainder = dividend % divisor;
            dividend = divisor;
            divisor = remainder;
        }
        return dividend;
    }
};

int main() {
    int a, b;
    cout << "Enter two non-negative integers: ";
    cin >> a >> b;

    if (a < 0 || b < 0) {
        cout << "Error: Input must be non-negative integers." << endl;
        return 1;
    }

    Gcd gcd(a, b); 
    int result = gcd.calculateGcd(); 

    cout << "Greatest Common Divisor of " << a << " and " << b << " is: " << result << endl;

    return 0;
}
