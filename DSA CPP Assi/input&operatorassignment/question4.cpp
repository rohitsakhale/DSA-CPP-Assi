//WAP for finding the volume of the cylinder by taking radius and height as input.
#include <iostream>
using namespace std;
int main(){
    float radius, height, pi, v;
    cout<<"enter a radius : ";
    cin>>radius;
    cout<<"enter a height : ";
    cin>>height;
    pi = 3.1415;
    v = pi*radius*radius*height;
    cout<<v;
}