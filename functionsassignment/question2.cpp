//Write a function that takes the radius of a circle as an argument and returns its area.
#include<iostream>
using namespace std;
int area(int radius) {
    return 3.1415*radius*radius;
}
int main() {
    int radius;
    cout<<"enter radius : ";
    cin >> radius;
    cout<<area(radius);

}