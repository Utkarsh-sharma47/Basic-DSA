#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>

using namespace std;

// Define operator precedence
unordered_map<char, int> precedence = {
    {'+', 1},
    {'-', 1},
    {'*', 2},
    {'/', 2},
    {'^', 3}
};

// Checks if a character is an operator
bool isOperator(char ch) {
    return precedence.count(ch);
}

// Checks if a character is an operand
bool isOperand(char ch) {
    return isalnum(ch); // Checks if the character is alphanumeric
}

// Converts an infix expression to a prefix expression
string infixToPrefix(const string& infix) {
    stack<char> operatorStack;
    string prefix = "";

    // Iterate over the infix expression from right to left
    for (int i = infix.length() - 1; i >= 0; --i) {
        char ch = infix[i];

        if (isOperand(ch)) {
            prefix = ch + prefix; // Add operand to prefix
        } else if (isOperator(ch)) {
            while (!operatorStack.empty() && precedence[operatorStack.top()] > precedence[ch]) {
                prefix = operatorStack.top() + prefix;
                operatorStack.pop();
            }
            operatorStack.push(ch);
        } else if (ch == ')') {
            operatorStack.push(ch);
        } else if (ch == '(') {
            while (!operatorStack.empty() && operatorStack.top() != ')') {
                prefix = operatorStack.top() + prefix;
                operatorStack.pop();
            }
            operatorStack.pop(); // Remove the closing parenthesis
        }
    }

    // Pop remaining operators from the stack
    while (!operatorStack.empty()) {
        prefix = operatorStack.top() + prefix;
        operatorStack.pop();
    }

    return prefix;
}

int main() {
    string infix = "(A-B/C)";
    string prefix = infixToPrefix(infix);

    cout << "Infix Expression: " << infix << endl;
    cout << "Prefix Expression: " << prefix << endl;

    return 0;
}
