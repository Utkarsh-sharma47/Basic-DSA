#include <iostream>
#include <stack>
#include <string>
#include<algorithm>
using namespace std;

// Function to return the precedence of an operator
int prec(char opr) {
    if (opr == '^') {
        return 3;
    } else if (opr == '*' || opr == '/') {
        return 2;
    } else if (opr == '+' || opr == '-') {
        return 1;
    } else {
        return -1;
    }
}

// Function to convert infix to postfix
string infix_to_prefix(string s)
{
    reverse(s.begin(),s.end());
    stack<char> st;
    string res;

    for (int i = 0; i < s.length(); i++) {
        /// Check if the character is an operand (a-z or A-Z)
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            res += s[i]; /// Add to resultant string
        }
        /// If the character is '(', push it to the stack
        else if (s[i] == '(') {
            st.push(s[i]);
        }
        /// If the character is ')', pop and output from the stack until '(' is found
        else if (s[i] == ')') {
            while (!st.empty() && st.top() != '(') {
                res += st.top();
                st.pop();
            }
            if (!st.empty()) {
                st.pop(); /// Pop the '(' from the stack
            }
        }
        /// An operator is encountered
        else {
            while (!st.empty() && prec(st.top()) >= prec(s[i])) {
                res += st.top();
                st.pop();
            }
            st.push(s[i]); /// Push the current operator to the stack
        }
    }

    /// Pop all the operators from the stack
    while (!st.empty()) {
        res += st.top();
        st.pop();
    }
    reverse(res.begin(),res.end());
    return res; /// Return the resultant postfix expression
}




int main()
{
    string s = "(a-b/c)";
    cout << "Infix expression: " << s << endl;
    cout << "Prefix expression: " << infix_to_prefix(s) << endl;

    return 0;
}
