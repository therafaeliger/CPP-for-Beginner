#include <iostream>

using namespace std;

int add(int a, int b);
void print(int c);

int main() {
    int a = 9, b = 11, result;

    result = add(a, b);
    print(result);

    return 0;
}

int add(int a, int b) {
    return a + b;
}
void print(int c) {
    cout << "Result: " << c;
}