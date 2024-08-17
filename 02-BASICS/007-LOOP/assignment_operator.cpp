#include <iostream>

using namespace std;

int main() {
    int a = 3; // assignment

    // assignment operator
    a += 3;
    cout << "After add by 3: " << a << endl;

    a -= 3;
    cout << "After sub by 3: " << a << endl;

    a *= 3;
    cout << "After multiply by 3: " << a << endl;

    a /= 3;
    cout << "After divide by 3: " << a << endl;

    a %= 3;
    cout << "After divide by 3 remain: " << a << endl;

    cin.get();
    return 0;
}