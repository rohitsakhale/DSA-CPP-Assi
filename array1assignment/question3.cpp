//Find the minimum value out of all elements in the array.

#include<iostream>
using namespace std;
int main(){
   
    int arr [5]= {87,43,45,23,77};
    int min = arr[0];
    for(int i=0;i<=4;i++){
        if(min>arr[i]) min = arr[i];
    }
    cout<<min<<endl;
   
    }
  
   
    