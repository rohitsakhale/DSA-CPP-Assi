#include <iostream>
using namespace std;

void printArrayInReverse(int arr[], int size, int currIndex) {
    if (currIndex < 0) {
        return;  
    }
    cout << arr[currIndex] << " "; 
    printArrayInReverse(arr, size, currIndex - 1);  
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArrayInReverse(arr, size, size - 1);

    return 0;
}

