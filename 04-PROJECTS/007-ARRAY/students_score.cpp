#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int, 11> n;

    cout << "Graph of Students Score" << endl << endl;

    for(int i = 0; i < n.size(); i++) {
        cout << "Number of students with score ";
        if(i == 0) {
            cout << "(0 - 9)\t : ";
        } else if(i == 10) {
            cout << " (100)\t : ";
        } else {
            cout << " (" << (i*10) << " - " << (i*10) + 9 << ") : ";
        }
        cin >> n[i];
    }

    cout << endl;
    cout << "Showing graph ..." << endl;

    for(int i = 0; i < n.size(); i++) {
        if(i == 0) {
            cout << "(0 - 9)\t  : ";
        } else if(i == 10) {
            cout << "(100)\t  : ";
        } else {
            cout << "(" << (i*10) << " - " << (i*10) + 9 << ") : ";
        }

        for(int j = 0; j < n[i]; j++) {
            cout << "|";
        }
        cout << endl;
    }

    cin.get();
    return 0;
}