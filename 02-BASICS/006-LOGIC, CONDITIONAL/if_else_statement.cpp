#include <iostream>

using namespace std;

int main() {
    int a;

    cout << "Enter an integer number: ";
    cin >> a;
    cout << "Value of A: " << a << endl;

    if (a > 2) {
        cout << "Your number is greater than 2" << endl;
    } else if (a == 2) {
        cout << "Your number is equal to 2" << endl;
    } else {
        cout << "Your number is less than 2" << endl;
    }

    cout << "~ The End ~" << endl;

    cin.get();
    return 0;
}