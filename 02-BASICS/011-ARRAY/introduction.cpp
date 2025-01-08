#include <iostream>

using namespace std;

int main() {
    // int value[5]; // without value
    int value[5] = {10,20,30,40,50};

    cout << value << "\n\n";

    cout << &value[0] << ", value = " << value[0] << endl;
    cout << &value[1] << ", value = " << value[1] << endl;
    cout << &value[2] << ", value = " << value[2] << endl;
    cout << &value[3] << ", value = " << value[3] << endl;
    cout << &value[4] << ", value = " << value[4] << endl << endl;

    value[0] = 1;
    value[1] = 2;
    value[2] = 3;
    value[3] = 4;
    value[4] = 5;

    cout << value[0] << endl;
    cout << value[1] << endl;
    cout << value[2] << endl;
    cout << value[3] << endl;
    cout << value[4] << endl << endl;

    int *ptr = value; // because value is address
    // change the value of member 2:
    *(ptr + 2) = 6; // integer is 4 byte data so address will + 4 + 4 >> you can check the address
    cout << &value[2] << ", value = " << value[2] << endl << endl;

    cout << "size of array (in byte): " << sizeof(value) << endl;
    cout << "number of members: " << sizeof(value)/sizeof(int) << endl; // you can change the data type as it was

    cin.get();
    return 0;
}