#include <iostream>

using namespace std;

// this is finite recursive function
int pow(int a, int b) {
    // // without recursive
    // int result = a;
    // for (int i = 1; i < b; i++) {
    //     result = result * a;
    // }
    // return result;

    // with recursive
    if (b == 1) return a; // end of recursive
    else return a * pow(a, (b - 1));
}

int main() {
    int a = 9, b = 2;

    cout << "Result: " << pow(a, b) << endl;

    return 0;
}