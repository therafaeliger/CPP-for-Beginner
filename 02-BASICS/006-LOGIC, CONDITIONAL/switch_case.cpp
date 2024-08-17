#include <iostream>

using namespace std;

int main() {
    int a;

    cout << "Enter an integer number: ";
    cin >> a;
    cout << "Value of A: " << a << endl;

    switch (a) {
        case 1:
            cout << "Bad Value";
            break;
        case 10:
            cout << "Good Value";
            break;
        
        default:
            cout << "I won't judge this!";
            break;
    }

    return 0;
}