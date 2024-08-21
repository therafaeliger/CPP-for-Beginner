#include <iostream>

using namespace std;

int pow(int x) {
    int y;
    y = x * x;
    return y;
}

int add(int a, int b) {
    return a + b;
}

int main(int argc, char const *argv[])
{
    int input, result;

    cout << "Enter a number: ";
    cin >> input;

    result = pow(input);

    cout << input << "^2 = " << result << endl;
    cout << input << " + " << result << " = " << add(input, result) << endl;

    return 0;
}
