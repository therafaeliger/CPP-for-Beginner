#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i <= 10; i++) {
        if (i == 5) {
            // break;
            continue;
        }
        cout << i << endl;
    }

    // you also can use while or do-while
    // note when using while or do while, increment or decrement must be above the control flow
    // (or it will get forever loop)

    cin.get();
    return 0;
}