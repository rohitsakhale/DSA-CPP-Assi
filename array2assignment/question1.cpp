//Count the number of elements strictly greater than x.

#include<iostream>
#include<vector>
using namespace std;
int main(){
   int arr[5];
   int n = 5;
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int target;
   cin>>target;

    int count= 0;
    for(int i=0;i<n;i++){
        if(arr[i]>target){
            count++;
        }
    }
    cout<<count;
}






