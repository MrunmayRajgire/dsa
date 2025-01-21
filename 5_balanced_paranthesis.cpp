#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto it: s)
        {
            if(it=='(' || it=='{' || it=='[')
            {
                st.push(it);
            }
            else
            {
                if(st.size() == 0)
                {
                    return false;
                }
                char top = st.top();
                st.pop();
                if((it==')' && top=='(') || (it == ']' and top == '[') or (it == '}' and top == '{'))
                {
                    continue;
                }
                else
                {
                    return false;
                }
            }
        }
        return st.empty();
    }
};