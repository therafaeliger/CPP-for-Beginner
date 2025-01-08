#include <iostream>

using namespace std;

int factorial(int n) {
    if (n > 0) return n * factorial(n-1);
    else return 1;
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << n << "! = " << (factorial(n)) << "\n";

    cin.get();
    return 0;
}