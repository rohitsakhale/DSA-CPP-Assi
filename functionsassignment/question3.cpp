//Given two numbers a and b, write a function to print all odd numbers between them.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(i%2 !=0){
            cout<<i<<" ";
        }
        
    }
    
}