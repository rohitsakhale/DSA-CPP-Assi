#include <iostream>
using namespace std;
bool PowerOfTwo(int n) {
    if(n == 1) {
    return true;
    }
    if(n % 2 == 0) {
    return PowerOfTwo(n / 2);
    }
    return false;
}
int main() {
    int n;
    cout<<"Enter a number : ";
    cin >> n;
    if(PowerOfTwo(n))
    {
    cout << "Yes" << endl;
    } 
    else {
    cout << "No" << endl;
    }
}