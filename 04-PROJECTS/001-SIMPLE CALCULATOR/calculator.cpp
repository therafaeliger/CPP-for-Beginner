#include <iostream>

using namespace std;

int main() {
    cout << "CALCULATOR V1\n\n";

    float a, b, result;
    char sign;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter operator: ";
    cin >> sign;
    cout << "Enter second number: ";
    cin >> b;

    if (sign == '+') {
        result = a + b;
        cout << a << " + " << b << " = " << result;
    } else if (sign == '-') {
        result = a - b;
        cout << a << " - " << b << " = " << result;
    } else if (sign == '*' || sign == 'x' || sign == 'X') {
        result = a * b;
        cout << a << " x " << b << " = " << result;
    } else if (sign == '/' || sign == ':') {
        result = a / b;
        cout << a << " : " << b << " = " << result;
    } else {
        cout << "Please check your input!";
    }

    cin.get();
    return 0;
}