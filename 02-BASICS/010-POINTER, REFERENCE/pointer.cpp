#include <iostream>

using namespace std;

int main() {
    int a = 5;

    // int *aPtr = &a; // the name of integer pointer can't be same as integer variable
    int *aPtr = nullptr; // an empty address
    cout << "Empty address: " << aPtr << endl;
    aPtr = &a;
    cout << "After address: " << aPtr << endl;

    cout << "Value of integer: " << a << endl;
    cout << "Address of integer: " << &a << endl;
    cout << "Value of integer pointer: " << *aPtr << endl; // dereferencing => get data from the pointer
    cout << "Address of integer pointer: " << aPtr << endl;

    *aPtr = 10;
    cout << "Value of integer: " << a << endl;
    cout << "Address of integer: " << &a << endl;
    cout << "Value of integer pointer: " << *aPtr << endl;
    cout << "Address of integer pointer: " << aPtr << endl;

    a = 17;
    cout << "Value of integer: " << a << endl;
    cout << "Address of integer: " << &a << endl;
    cout << "Value of integer pointer: " << *aPtr << endl;
    cout << "Address of integer pointer: " << aPtr << endl;

    cin.get();
    return 0;
}