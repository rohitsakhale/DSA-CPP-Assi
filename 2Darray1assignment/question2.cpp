//Write a program to add two matrices and save the result in one of the given matrices.

#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter no of rows : ";
    cin>>m;
    int n;
    cout<<"Enter no of coloums : ";
    cin>>n;
    int a[m][n];
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>a[i][j];
        }
       
    }
    int x;
    cout<<"Enter no of rows : ";
    cin>>x;
    int y;
    cout<<"Enter no of coloums : ";
    cin>>y;
    int b[x][y];
    for(int i=0;i<=x-1;i++){
        for(int j=0;j<=y-1;j++){
            cin>>b[i][j];
        }
        
    }
    for(int i=0;i<=x-1;i++){
        for(int j=0;j<=y-1;j++){
            cout<<a[i][j]+b[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
   

}