#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,2,3,3,3,3,3,4,4,5,8,8};
    int n = 13;
    int target = 3;
    int lo=0;
    int hi = n-1;
    while(lo<=hi){
        int mid =  (lo+hi)/2;
        if(arr[mid]==target){
            if(arr[mid+1]!=target){
                cout<<mid;
                break;
            }
            else{
                lo = mid + 1;
            }
        }
        else if(arr[mid]<target) lo = mid+1;
        else hi = mid-1;
       
        
    }
}