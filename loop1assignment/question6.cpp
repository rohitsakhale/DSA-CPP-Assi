#include<iostream>
using namespace std;

int main() {
	int n;
    cout<<"Enter a number : ";
	cin >> n;
	int i = 0;
	while (i < 26) {
		cout << "ASCII value of " << (char)(i + 'A') << " is " << (int)(i + 'A') << endl;
		i++;
	}
}