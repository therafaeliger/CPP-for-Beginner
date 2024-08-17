#include <iostream>

using namespace std;

int main() {
    int a = 5, b = 5;

    cout << a << endl;
    cout << a++ << endl; // postincrement
    cout << a << endl;

    cout << b << endl;
    cout << ++b << endl; // preincrement
    cout << b << endl;

    cin.get();
    return 0;
}