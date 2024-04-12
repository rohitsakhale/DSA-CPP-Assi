#include <iostream>
using namespace std;

int findIndex(int arr[], int size, int target, int currentIndex) {
    if (currentIndex >= size) {
        return -1; 
    }

    if (arr[currentIndex] == target) {
        return currentIndex;  
    }

    return findIndex(arr, size, target, currentIndex + 1);
}

int main() {
    int arr[] = {3, 8, 12, 5, 9};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    int index = findIndex(arr, size, target, 0);

    if (index != -1) {
        cout << "Index of " << target << " is: " << index << endl;
    } else {
        cout << target << " not found in the array." << endl;
    }

    return 0;
}
