//Write a program to rotate the matrix by 90 degrees anti-clockwise.
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
            if(i<=j);
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
            cout<<arr[i][j],arr[j][i];
        }
        cout<<endl;
    }
     for(int j=0;j<n;j++){
        for(int i=0;i<n/2;i++){
            int n;
            int temp = arr[i][j];
            arr[i][j] =  arr[n-i-1][j];
            arr[n-i-1][j] = temp;
            cout<<arr[i][j],arr[n-i-1][j];
            
           
           
        }
        cout<<endl;
    }






}