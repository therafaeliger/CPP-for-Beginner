#include <iostream>
#include <cstdlib> // contains random function

using namespace std;

int main() {
    char start;

    while (true) {
        cout << "Roll the dice? (y/n)";
        cin >> start;
        if(start == 'y') {
            cout << (rand() % 6) + 1 << endl;
        } else if (start == 'n') {
            break;
        } else {
            cout << "Try again!" << endl;
        }
    }

    return 0;
}