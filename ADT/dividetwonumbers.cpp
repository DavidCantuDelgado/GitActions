#include <iostream>
using namespace std;

float divideNumbers(float a, float b) {
    if (b == 0) {
        throw "Division by zero condition!";
    }
    return (a / b);
}

int main() {

    cout << "Enter two numbers separated by space: ";
    float x, y;
    cin >> x >> y;
    cout << "Result: " << divideNumbers(x, y) << endl;

    return 0;
}