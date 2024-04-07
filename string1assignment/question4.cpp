//Input a string of even length and reverse the second half of the string.
#include<algorithm>
#include<iostream>
#include<string>
using namespace std;

int main(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   reverse(s.begin()+n/2,s.end());
   cout<<s;
    

}