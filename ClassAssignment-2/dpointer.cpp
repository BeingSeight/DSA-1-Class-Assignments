// wap to find the greatest of two integers using pointers.

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Use pointers to compare the values
    int *p1 = &a, *p2 = &b;
    if (*p1 > *p2) {
        cout << "Greatest number: " << *p1 << endl;
    } else {
        cout << "Greatest number: " << *p2 << endl;
    }

    return 0;
}