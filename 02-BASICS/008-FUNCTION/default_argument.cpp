#include <iostream>

using namespace std;

double cube_volume(double p = 1, double l = 2, double t = 3);
double rect_area(double p = 1, double l = 3) {
    return p * l;
}

int main() {
    cout << "Volume 1: " << cube_volume(3, 4, 5) << endl;
    cout << "Volume 1: " << cube_volume() << endl;
    cout << "Volume 1: " << cube_volume(3,3) << endl;

    cout << "Area 1: " << rect_area(3,3) << endl;
    cout << "Area 1: " << rect_area(3) << endl;

    return 0;
}

double cube_volume(double p, double l, double t) {
    return p * l * t;
}
