#include <iostream>

using namespace std;

int main() {
    // f(n) = f(n-1) + f(n-2)
    // 1, 1, 2, 3, 5, 8, 13, ...

    int n, f_n = 1, f_n_1 = 1, f_n_2 = 0;

    cout << "Enter (n) value: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << f_n << " ";
        f_n = f_n_1 + f_n_2;
        f_n_2 = f_n_1;
        f_n_1 = f_n;
    }

    cin.get();
    return 0;
}