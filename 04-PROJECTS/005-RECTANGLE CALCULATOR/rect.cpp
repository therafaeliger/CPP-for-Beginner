#include <iostream>

using namespace std;

double area(double p, double l) {
    double area = p * l;
    return area;
}

double circum(double p, double l) {
    return 2 * (p + l);
}

void show_area(double p, double l) {
    double a = area(p, l);
    cout << "Print area size: " << a << endl;
}

void show_circum(double p, double l) {
    cout << "Print circumstance: " << circum(p, l) << endl;
}

int main() {
    double p, l, c;

    cout << "Enter p value: ";
    cin >> p;
    cout << "Enter l value: ";
    cin >> l;

    c = circum(p, l);

    cout << "Area size: " << area(p, l) << endl;
    cout << "Circumstance: " << c << endl;

    show_area(p, l);
    show_circum(p, l);

    cin.get();
    return 0;
}