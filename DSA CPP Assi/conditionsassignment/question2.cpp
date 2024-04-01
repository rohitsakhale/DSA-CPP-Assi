//Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not.

#include <iostream>
using namespace std;
int main(){
    float pi=3.1415;
    int r, area, circumference;
    cout<<"enter radius : ";
    cin>>r;
    area = pi*r*r;
    circumference = 2*pi*r;
    if(area>circumference){
        cout<<"area is greater than circumference";
    }
    else{
        cout<<"circumference is greater than area";
    }
    

}