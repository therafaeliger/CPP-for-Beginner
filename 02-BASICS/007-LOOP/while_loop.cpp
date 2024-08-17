#include <iostream>

using namespace std;

int main() {
    int a = 0;

    while (a < 10) {
        cout << "Loop " << a << endl;
        a++;
    }

    cout << "End" << endl;

    cin.get();
    return 0;
}