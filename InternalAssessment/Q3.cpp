#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 5, 8, 19, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int minVal = arr[0];
    int maxVal = arr[0];
    
    for (int i = 1; i < n; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    
    cout << "Smallest: " << minVal << ", Largest: " << maxVal << endl;
    
    return 0;
}