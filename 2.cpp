#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string input;
    stack<char> st;

    cout << "Enter a string: ";
    cin >> input;

    
    for (int i = 0; i < input.length(); i++) {
        st.push(input[i]);
    }

    
    string reversed = "";
    while (!st.empty()) {
        reversed += st.top();
        st.pop();
    }

    cout << "Reversed string: " << reversed << endl;

    return 0;
}
