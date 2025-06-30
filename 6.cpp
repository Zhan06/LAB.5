#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    string word;
    deque<char> dq;
    bool isPalindrome = true;

    cout << "Enter a word: ";
    cin >> word;

    
    for (int i = 0; i < word.length(); i++) {
        dq.push_back(word[i]);
    }

    while (dq.size() > 1) {
        if (dq.front() != dq.back()) {
            isPalindrome = false;
            break;
        }
        dq.pop_front();
        dq.pop_back();
    }
    if (isPalindrome) {
        cout << "It is a palindrome." << endl;
    } else {
        cout << "It is not a palindrome." << endl;
    }

    return 0;
}
