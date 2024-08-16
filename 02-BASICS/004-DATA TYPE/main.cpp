#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int a = 1;
    cout << endl << "Integer" << endl;
    cout << a << endl;
    cout << sizeof(a) << " byte" << endl;
    cout << numeric_limits<int>::min() << endl;
    cout << numeric_limits<int>::max() << endl;

    long b = 2;
    cout << endl << "Long" << endl;
    cout << b << endl;
    cout <<sizeof(b) << " byte" << endl;
    cout << numeric_limits<long>::min() << endl;
    cout << numeric_limits<long>::max() << endl;

    short c = 3;
    cout << endl << "Short" << endl;
    cout << c << endl;
    cout <<sizeof(c) << " byte" << endl;
    cout << numeric_limits<short>::min() << endl;
    cout << numeric_limits<short>::max() << endl;

    float d = 1.1;
    cout << endl << "Float" << endl;
    cout << d << endl;
    cout <<sizeof(d) << " byte" << endl;
    cout << numeric_limits<float>::min() << endl;
    cout << numeric_limits<float>::max() << endl;

    double f = 2.1;
    cout << endl << "Double" << endl;
    cout << f << endl;
    cout <<sizeof(f) << " byte" << endl;
    cout << numeric_limits<double>::min() << endl;
    cout << numeric_limits<double>::max() << endl;

    char g = 'A';
    cout << endl << "Char" << endl;
    cout << g << endl;
    cout <<sizeof(g) << " byte" << endl;

    string h = "ABC ABC";
    cout << endl << "String" << endl;
    cout << h << endl;
    cout <<sizeof(h) << " byte" << endl;

    bool i = true; // or false
    cout << endl << "Bool" << endl;
    cout << i << endl;
    cout <<sizeof(i) << " byte" << endl;

    unsigned int j = 1;
    cout << endl << "Unsigned" << endl;
    cout << j << endl;
    cout << sizeof(j) << " byte" << endl;
    cout << numeric_limits<unsigned int>::min() << endl;
    cout << numeric_limits<unsigned int>::max() << endl;

    // cin.get();
    return 0;
}