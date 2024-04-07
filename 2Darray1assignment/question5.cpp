//Write a program to print the row number having the maximum sum in a given matrix.

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m;
    cout<<"Enter no of rows : ";
    cin>>m;
    int n;
    cout<<"Enter no of coloums : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
    int maxsum = INT_MIN;
    for(int i=0;i<=m-1;i++){
        int sum = 0;
        for(int j=0;j<=n-1;j++){
            sum += arr[i][j];
        }
        maxsum = max(maxsum, sum);
    }
    cout<<maxsum;
}