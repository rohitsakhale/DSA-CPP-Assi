#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int* ptr1 = &a;
    int* ptr2 = &b;
    int ans;
    int* ptrAns = &ans;
     
    *ptrAns = (*ptr1) * (*ptr2);
    cout << *ptrAns << endl;


}
