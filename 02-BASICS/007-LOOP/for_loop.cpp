#include <iostream>

using namespace std;

int main() {
    for (int a = 0; a < 10; a++) {
        cout << "Loop " << a << endl;
    }

    int total = 0;
    for (int i = 0; i <= 10; i++) {
        total += i;
        cout << i << " || " << total << endl;
    }

    total = 0;
    for (int i = 0; i <= 10; i++, total += i) {
        cout << i << " || " << total << endl;
    }

    cout << "End" << endl;

    cin.get();
    return 0;
}