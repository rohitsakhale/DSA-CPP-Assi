#include <iostream>
using namespace std;
int main(){
    int A[] = {5,6,7,8,0,5,4,0};
    int n = 8;
    int j = 0;
    for (int i=0; i<n; i++) {
        if (A[i] != 0) {
        swap(A[j], A[i]);
        j++;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    return 0;
}