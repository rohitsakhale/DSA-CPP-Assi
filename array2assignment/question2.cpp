//WAP to find the largest three elements in the array.

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
    int max = arr[0];
    int max2 = arr[0];
    int max3 = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max) max = arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max2 && arr[i]!=max) max2 = arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max3 && arr[i]!=max2 && arr[i]!=max) max3 = arr[i];
    }
    cout<<max<<endl;
    cout<<max2<<endl;
    cout<<max3<<endl;

}
