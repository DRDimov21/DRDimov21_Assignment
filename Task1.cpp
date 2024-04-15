#include <iostream>
using namespace std;
class Fact {
private:
    int num;

public:
    Fact(int n) {
        num = n;
    }

    int calculateFactorial() const {
        int factorial = 1;
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        return factorial;
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Fact fact(n);
    int result = fact.calculateFactorial();

    cout << "Factorial of " << n << " is: " << result << endl;

    return 0;
}
