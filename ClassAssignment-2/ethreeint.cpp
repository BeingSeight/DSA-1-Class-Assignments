// wap to find the greatest among three integers using pointers.

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;


    int *p1 = &a, *p2 = &b, *p3 = &c;
    if (*p1 > *p2) {
        if (*p1 > *p3) {
            cout << "Greatest number: " << *p1 << endl;
        } else {
            cout << "Greatest number: " << *p3 << endl;
        }
    } else {
        if (*p2 > *p3) {
            cout << "Greatest number: " << *p2 << endl;
        } else {
            cout << "Greatest number: " << *p3 << endl;
        }
    }

    return 0;
}