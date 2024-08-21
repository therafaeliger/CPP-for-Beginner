#include <iostream>
#include <cmath>

// library reference: www.cppreference.com

using namespace std;

int main() {
    int x;
    double y;

    cout << "Enter a value: ";
    cin >> x;

    y = sqrt(x); // this sqrt function from cmath library
    cout << "Square root for " << x << " = " << y << endl;

    cin.get();
    return 0;
}