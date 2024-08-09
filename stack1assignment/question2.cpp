#include<bits/stdc++.h>
using namespace std;

void removeKthElement(int k, stack<int>& st) {
    if (k <= 0 || k > st.size()) {
        cout << "Invalid value of k" << endl;
        return;
    }

    stack<int> st2;

  
    for (int i = 0; i < k - 1; i++) {
        st2.push(st.top());
        st.pop();
    }
    st.pop();
    while (!st2.empty()) {
        st.push(st2.top());
        st2.pop();
    }
}

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    removeKthElement(3, st);

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}



