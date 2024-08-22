#include <iostream>

using namespace std;

// this is global variable
int number = 10;

int get_global() {
    return number;
}

int get_local() {
    // local variable for scope get_local()
    int number = 7;
    return number;
}

int main() {
    cout << "Global Variable: " << number << endl;

    // this is local variable for scope main()
    int number = 8;
    cout << "Local Variable: " << number << endl;

    cout << "Global Variable: " << get_global() << endl;
    cout << "Local Variable: " << get_local() << endl;

    {
        // this is block variable
        int number = 2;
        cout << "Block Variable: " << number << endl;
    }

    return 0;
}