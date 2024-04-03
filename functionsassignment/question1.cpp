// // Write a function to print squares of first n natural numbers, taking n as argument to the function
#include<iostream>
using namespace std;
int square(int num){
    return num * num;
}
void firstNsquare(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" "<<square(i)<<endl;
    }

}
int main(){
    int n;
    cin>>n;
    firstNsquare(n);
    return 0;
}


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         int square=i*i;
//         cout<<i<<" "<<square<<endl;
//     }
// }
