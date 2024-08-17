#include <iostream>

using namespace std;

int main() {
    int mode, n;
    cout << "Enter mode: ";
    cin >> mode;

    cout << "Enter (n) value: ";
    cin >> n;

    switch (mode)
    {
        case 1:
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= i; j++) {
                    cout << "*";
                }

                cout << endl;
            }
            break;

        case 2:
            for (int i = 1; i <= n; i++) {
                for (int j = n; j >= i; j--) {
                    cout << "*";
                }

                cout << endl;
            }
            break;

        case 3:
            for (int i = 1; i <= n; i++) {
                for (int j = n; j > i; j--) {
                    cout << " ";
                }
                for (int k = 1; k <= i; k++) {
                    cout << "*";
                }

                cout << endl;
            }
            break;

        case 4:
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j < i; j++) {
                    cout << " ";
                }
                for (int k = n; k >= i; k--) {
                    cout << "*";
                }

                cout << endl;
            }
            break;

        case 5:
            for (int i = 1; i <= n; i++) {
                for (int j = n; j > i; j--) {
                    cout << " ";
                }
                for (int k = 1; k <= 2 * i - 1; k ++) {
                    cout << "*";
                }

                cout << endl;
            }
            break;

        case 6:
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j < i; j++) {
                    cout << " ";
                }
                for (int k = n; k >= 2 * i - n; k--) {
                    cout << "*";
                }

                cout << endl;
            }
            break;

        case 7:
            for (int i = 1; i < n; i++) {
                for (int j = n; j > i; j--) {
                    cout << " ";
                }
                for (int k = 1; k <= 2 * i - 1; k ++) {
                    cout << "*";
                }

                cout << endl;
            }

            for (int i = 1; i <= n; i++) {
                for (int j = 1; j < i; j++) {
                    cout << " ";
                }
                for (int k = n; k >= 2 * i - n; k--) {
                    cout << "*";
                }

                cout << endl;
            }
            break;
        
        default:
            break;
    }

    cin.get();
    return 0;
}