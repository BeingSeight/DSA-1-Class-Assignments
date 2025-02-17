// wap to swap two integers using pointers (using a temporary variable)

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;


    int *p1 = &a, *p2 = &b;
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}