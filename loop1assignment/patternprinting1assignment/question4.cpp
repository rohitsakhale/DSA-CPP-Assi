#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        char ch = 65;
        for(int j=1;j<=i;j++){
            
            if(i%2!=0){
                cout<<j;
            }
            
            else{
                cout<<ch;
                ch++;
            }
        }
        cout<<endl;
    }
}