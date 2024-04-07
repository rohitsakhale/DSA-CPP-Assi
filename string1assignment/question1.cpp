//Input a string of size n and update all the odd positions in the string to character ‘#’. Consider
//0-based indexing.
#include<iostream>
using namespace std;
int main(){
    string s = "Rohitsakhale";
    for(int i=1;i<s.size();i+=2){
        s[i] = '#';
        

    }
    cout<<s;
}
