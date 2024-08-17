#include <iostream>

using namespace std;

int main() {
    int a = 2;
    int b = 2;

    bool result_1, result_2;

    result_1 = (a == b);
    result_2 = (a != b);

    cout << result_1 << " | ";
    cout << result_2 << endl;

    result_1 = (a < b);
    result_2 = (a > b);

    cout << result_1 << " | ";
    cout << result_2 << endl;

    result_1 = (a <= b);
    result_2 = (a >= b);

    cout << result_1 << " | ";
    cout << result_2 << endl;

    cin.get();
    return 0;
}