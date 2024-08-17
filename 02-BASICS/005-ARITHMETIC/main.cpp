#include <iostream>

using namespace std;

int main() {
    int a = 1, b = 3, c = 10;
    float d = 1.2, e = 3.2, f = 1.0;

    int result_int;
    float result_f;

    cout << "Addition and Substraction" << endl;
    result_int = a + b;
    cout << a << " + " << b << " = " << result_int << endl;

    result_f = d - f;
    cout << d << " - " << f << " = " << result_f << endl;

    cout << "\nMultiplication and Division" << endl;
    result_int = c * b;
    cout << c << " x " << b << " = " << result_int << endl;

    result_f = d / e;
    cout << d << " : " << e << " = " << result_f << endl;

    result_int = c % b;
    cout << c << " % " << b << " = " << result_int << endl;

    cout << "\nCombination" << endl;
    result_int = a + b * c;
    cout << a << " + " << b << " x " << c << " = " << result_int << endl;

    result_int = (a + b) * c;
    cout << "(" << a << " + " << b << ")" << " x " << c << " = " << result_int << endl;

    return 0;
}