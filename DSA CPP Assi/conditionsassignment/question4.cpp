//Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter.

#include <iostream>
using namespace std;
int main(){
    int length, breadth,area,perimeter;
    cout<<"enter a length : ";
    cin>>length;
    cout<<"enter a breadth : ";
    cin>>breadth;
    area = length * breadth;
    perimeter = 2*(length+breadth);
    if(area>perimeter){
        cout<<"area of rectanle is greater than its perimeter";
    }
    else{
        cout<<"perimeter is greater than area of rectangle";
    }

}