// wap to swap two integers using pointers (without using third variable)
#include <iostream>
using namespace std;

int main() {
    int *a = new int;
    int *b = new int;
    cout << "Enter two numbers: ";
    cin >> *a >> *b;
    cout << "Before swapping: a = " << *a << ", b = " << *b << endl;
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    cout << "After swapping: a = " << *a << ", b = " << *b << endl;
    delete a;
    delete b;
    return 0;
}