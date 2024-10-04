#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool validParanthesis(string s)
{
    stack<char> st;
    for (auto i : s)
    {
        if (st.size() == 0)
        {
            st.push(i);
        }
        else
        {
            if (i == ')')
            {
                if (st.top() != '(')
                    return false;
                st.pop();
            }
            else if (i == ']')
            {
                if (st.top() != '[')
                    return false;
                st.pop();
            }
            else if (i == '}')
            {
                if (st.top() != '{')
                    return false;
                st.pop();
            }
            else
            {
                st.push(i);
            }
        }
    }
    if (st.size())
        return false; // or st.size()>0
    return true;
}

/*
bool validParanthesis(string s) {
    stack<char> st;

    // Traverse each character in the string
    for (auto i : s) {
        if (i == '(' || i == '[' || i == '{') {
            st.push(i);  // Push opening brackets onto the stack
        } else {
            // If we encounter a closing bracket, check if it matches with the top of the stack
            if (st.empty()) return false;  // If stack is empty, no matching opening bracket
            if (i == ')' && st.top() != '(') return false;
            if (i == ']' && st.top() != '[') return false;
            if (i == '}' && st.top() != '{') return false;
            st.pop();  // Pop the matched opening bracket
        }
    }

    // If stack is empty at the end, all brackets were matched correctly
    return st.empty();
}
*/
int main()
{
    string s;
    cin >> s;
    bool ans = validParanthesis(s);
    cout << (ans ? "true" : "false");
    return 0;
}