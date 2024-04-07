//Find the difference between the sum of elements at even indices to the sum of elements at odd
//indices.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sumeven = 0;
    int sumodd = 0;
    for(int i=0;i<n;i++){
        (i%2==0) ? sumeven += arr[i] : sumodd += arr[i];  
    }
    cout<<sumeven-sumodd;


}


