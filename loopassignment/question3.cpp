#include <iostream>
using namespace std;
int main( ) {
for (int x = 1; x * x <= 10; x++)
cout << "In for loop" << endl;
}


// in first loop square of x means 1 square is 1 so loop is pass
// and after that increment is there so the value of x is 2 so square of 2 is 4 it is also less than 10 
//so loop is pass
// after the next increment value of x is 3 and square of three is 9 it is also less than 10
// so loop is pass again 
// after the next increment value of x is 4 and squre is 16 it is not less than or equal to 10
// so loop will be break