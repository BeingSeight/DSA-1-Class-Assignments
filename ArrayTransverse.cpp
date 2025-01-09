// Q6. Write a C++ program to traverse an array using function?

#include <iostream>
using namespace std;

void traverseArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    traverseArray(arr, size);

    return 0;
}
