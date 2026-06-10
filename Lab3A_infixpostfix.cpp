#include <iostream>
#include <stack>
using namespace std;

int prec(char c)
{
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return -1;
}

int main()
{
    string infix;
    cin >> infix;

    stack<char> st;
    string postfix = "";

    for (char ch : infix)
    {
        if (isalnum(ch))
            postfix += ch;

        else if (ch == '(')
            st.push(ch);

        else if (ch == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                postfix += st.top();
                st.pop();
            }
            st.pop();
        }

        else
        {
            while (!st.empty() &&
                   prec(st.top()) >= prec(ch))
            {
                postfix += st.top();
                st.pop();
            }

            st.push(ch);
        }
    }

    while (!st.empty())
    {
        postfix += st.top();
        st.pop();
    }

    cout << postfix;

    return 0;
}