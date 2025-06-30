#include <iostream>
#include <deque>  
using namespace std;

int main() {
    deque<int> dq;  

    
    dq.push_front(10);  
    dq.push_back(20);   
    dq.push_front(5);   

    
    cout << "Deque contains: ";
    for (int i = 0; i < dq.size(); i++) {
        cout << dq[i] << " ";
    }
    cout << endl;

    
    dq.pop_back();  
    cout << "Pop back: 20" << endl;

    
    dq.pop_front(); 
    cout << "Pop front: 5" << endl;

    cout << "Remaining: " << dq.front() << endl;

    return 0;
}
