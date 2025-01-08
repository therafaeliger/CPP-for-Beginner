#include <iostream>

using namespace std;

int main() {
    int a = 5;
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;

    int &b = a;
    cout << "Value of b: " << b << endl;
    cout << "Address of b: " << &b << endl;

    b = 10;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;

    a = 17;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;

    cin.get();
    return 0;
}