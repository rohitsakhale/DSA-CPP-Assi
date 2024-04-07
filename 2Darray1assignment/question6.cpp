#include<iostream>
#include<climits>
using namespace std;
int main(){
  
    int n;
    cout<<"Enter no of rows and coloums : ";
    cin>>n;
    int arr[n][n];
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
    int i,j;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==n/2 or j==n/2)cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   
}