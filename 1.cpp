#include <iostream>   
#include <stack>      
using namespace std;

int main() {
    stack<int> st;   
    int num;         

    cout << "Enter 5 numbers: ";  
    for (int i = 0; i < 5; i++) {
        cin >> num;    
        st.push(num);  
    }

    cout << "Stack (Top to Bottom): ";
    while (!st.empty()) {        
        cout << st.top() << " "; 
        st.pop();               
    }

    return 0;
}
