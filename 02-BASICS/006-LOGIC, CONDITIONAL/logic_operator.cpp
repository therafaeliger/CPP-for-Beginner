#include <iostream>

using namespace std;

int main() {
    int a = 2;
    int b = 2;

    bool result;

    result = !(a == b) && (a > b) || (b < a);
    cout << result << endl;
    
    result = !(a == b) and (a > b) or (b < a);
    cout << result << endl;

    cin.get();
    return 0;
}