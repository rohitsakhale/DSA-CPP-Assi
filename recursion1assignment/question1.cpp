#include <iostream>
using namespace std;
int findSum(int curr, int lastNumber) {
    if(curr > lastNumber) return 0;
    if(curr % 2 == 0) return findSum(curr+1, lastNumber);
    return curr + findSum(curr+2, lastNumber);
}
int main() {
    int a, b;
    cout<<"Enter two numbers : ";
    cin >> a >> b;
    cout << findSum(a, b) << endl;
    return 0;
}