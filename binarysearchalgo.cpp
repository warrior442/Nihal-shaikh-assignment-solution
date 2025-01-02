#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    
    cout << "Enter the target: ";
    cin >> target;
    
    int result = binarySearch(arr, n, target);
    
    if (result != -1) {
        cout << "Target found at index " << result << endl;
    } else {
        cout << "Target not found" << endl;
    }
    
    return 0;
}
