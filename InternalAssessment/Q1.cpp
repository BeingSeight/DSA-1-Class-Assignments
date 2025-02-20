// Q1
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 25, 30, 45, 50};
    int target = 30;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    bool found = false;
    int index = -1;
    
    for (int i = 0; i < n; ++i) {
        if (arr[i] == target) {
            found = true;
            index = i;
            break;
        }
    }
    
    if (found) {
        cout << "Element found at index " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }
    
    return 0;
}