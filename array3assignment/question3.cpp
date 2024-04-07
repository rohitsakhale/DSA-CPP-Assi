#include <iostream>
using namespace std;
    int main() {
    int arr[5]={1,3,3,5,2};
    int n=5;
    for (int i=0; i<n; i++) {
        int j;
    for (j=0; j<n; j++)
        if (i != j && arr[i] == arr[j])break;
        if (j == n){
        cout<<arr[i];
        return 0;
    }
}
    return 0;
}