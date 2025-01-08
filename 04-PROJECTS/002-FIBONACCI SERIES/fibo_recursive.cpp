#include <iostream>

using namespace std;

int fibonacci(int n) {
    if ((n == 0) || (n == 1)) return n;
    else return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;

    cout << "Enter positive value: ";
    cin >> n;

    cout << "Fibonacci Number (n): ";
    cout << fibonacci(n) << " ";

    cin.get();
    return 0;
}