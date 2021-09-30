/* C++ implementation to convert 
infix expression to postfix*/
// Note that here we use std::stack
// for Stack operations
#include <bits/stdc++.h>
using namespace std;

//Function to return precedence of operators
int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
// The main function to convert infix expression
//to postfix expression
string infixToPostfix(string s)
{
    stack<char> st;
    st.push('N');
    int l = s.length();
    string ns;
    for (int i = 0; i < l; i++)
    {

        // If the scanned character is
        // an operand, add it to output string.
        if ((s[i] >= 'a' && s[i] <= 'z') ||
            (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
        {
            ns += s[i];
        }

        // If the scanned character is an
        // ‘(‘, push it to the stack.
        else if (s[i] == '(')

        {
            st.push('(');
        }

        // If the scanned character is an ‘)’,
        // pop and to output string from the stack
        // until an ‘(‘ is encountered.
        else if (s[i] == ')')
        {
            while (st.top() != 'N' && st.top() != '(')
            {
                char c = st.top();
                st.pop();
                ns += c;
            }
            if (st.top() == '(')
            {
                char c = st.top();
                st.pop();
            }
        }

        //If an operator is scanned
        else
        {
            while (st.top() != 'N' && prec(s[i]) <= prec(st.top()))
            {
                char c = st.top();
                st.pop();
                ns += c;
            }
            st.push(s[i]);
        }
    }

    // Pop all the remaining elements from the stack
    while (st.top() != 'N')
    {
        char c = st.top();
        st.pop();
        ns += c;
    }

    cout << ns << endl;
    return ns;
}
// evaluation of a postfix exp
char evaluate()
{
    string s;
    cout << "Enter the exoression" << endl;
    cin >> s;
    stack<char> st;
    st.push('N');
    string post = infixToPostfix(s);
    for (int i = 0; i < post.length(); i++)
    {
        if (prec(post[i]) == -1)
        {
            st.push(post[i]);
        }
        else
        {
            int a, b;
            b = st.top() - 48;
            st.pop();
            a = st.top() - 48;
            st.pop();
            int res;
            switch (post[i])
            {
            case '+':
                res = a + b;
                break;
            case '-':
                res = a - b;
                break;
            case '*':
                res = a * b;
                break;
            case '/':
                res = a / b;
                break;
            case '^':
                res = pow(a, b);
                break;

            default:
                break;
            }

            char c = res + 48;
            st.push(c);
        }
    }
    int res;
    if (st.top() > '9')
    {
        res = (int)st.top() - 48;
    }

    cout << res;
    return st.top();
}

//Driver program to test above functions
int main()
{
    // string exp;
    // cout << "Enter expression" << endl;
    // cin >> exp;
    // infixToPostfix(exp);
    evaluate();
    return 0;
}
// This code is contributed by Gautam Singh
