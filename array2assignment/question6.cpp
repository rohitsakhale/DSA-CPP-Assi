//Find the unique number in a given Array where all the elements are being repeated twice with one
//value being unique.

#include<iostream>
using namespace std;
int main(){
    int n,x,y;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<x;i++){
        bool flag = true;
        for(int j=0;j<y;j++){
            if(i==j) continue;
            if(arr[i]==arr[j])
            bool flag = false;
            break;
        }
        if(flag == true);
        cout<<arr[i]<<endl;
        break;
    }
}