//Write a program to print the elements of both the diagonals in a square matrix.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows and colums : ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter the elements of matrix : ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        cin>>arr[i][j];
    
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j == n-1) || (i == j)) cout<<arr[i][j]<<" ";
            else cout<<" ";
        }
        cout<<endl;
    }
}