// Calculate the product of all the elements in the given array

#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int product = 1;
    for (int i=0;i<=4;i++){
        product = product*arr[i];
    }
    cout<<product;

}