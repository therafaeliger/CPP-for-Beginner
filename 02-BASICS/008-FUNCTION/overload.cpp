#include <iostream>

using namespace std;

// this is basic function
int rect_area(int p, int l) {
    return p * l;
}

// the overload function
int rect_area(int p) {
    return p * p;
}
// other example for data type casting
double rect_area(double p) {
    return p * p;
}

int main() {
    cout << "Area of rectangle: " << rect_area(2, 5) << endl;
    cout << "Area of square: " << rect_area(2) << endl;
    cout << "Area of square: " << rect_area(2.5) << endl;

    return 0;
}