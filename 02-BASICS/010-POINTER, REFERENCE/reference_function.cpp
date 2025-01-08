#include <iostream>

using namespace std;

void pow(int &);

int main() {
    int a = 5;
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;

    pow(a);
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;

    cin.get();
    return 0;
}

void pow(int &num) {
    num = num * num; // store in the same memory
}