#include <iostream>

using namespace std;

// no need data type (return function) when using pointer => use void
void pow(int *);

int main() {
    int a = 5;
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;

    pow(&a);
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;

    cin.get();
    return 0;
}

void pow(int *num) {
    *num = (*num) * (*num); // we use pointer, so it will store in the same memory (not separated)
}