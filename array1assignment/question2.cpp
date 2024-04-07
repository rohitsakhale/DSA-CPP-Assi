//Find the second largest element in the given Array in one pass.

#include<iostream>
using namespace std;
int main(){
   
    int arr [5]= {2,43,45,23,77};
    int max = arr[0];
    for(int i=0;i<=4;i++){
        if(max<arr[i]) max = arr[i];
    }
    int max2 = arr[0];
    for(int i=0;i<=4;i++){
        if(arr[i]!=max && max2<arr[i] )
        max2=arr[i];
    }
    cout<<max<<endl;
    cout<<max2;
   
    }
    

    

