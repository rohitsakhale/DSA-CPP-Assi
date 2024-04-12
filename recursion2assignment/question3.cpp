#include <iostream>
#include <string>
using namespace std;

string countAndSay(int n) {
    if (n == 1) {
        return "1";
    } else {
        string prev = countAndSay(n - 1);
        string result = "";
        int count = 1;

        for (int i = 0; i < prev.length(); ++i) {
            if (i + 1 < prev.length() && prev[i] == prev[i + 1]) {
                count++;
            } else {
                result += (count > 1 ? to_string(count) + " " : "") + prev[i] + " ";
                count = 1; 
            }
        }
        return result;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    string result = countAndSay(n);
    cout << "countAndSay(" << n << ") = " << result << endl;
    return 0;
}
