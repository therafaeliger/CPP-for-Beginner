#include <iostream>

using namespace std;

int main() {
    int a = 0;

    do {
        cout << "Loop " << a << endl;
        a++;
    } while (a < 0);

    cout << "End" << endl;

    cin.get();
    return 0;
}