        }
            }
            else if(s[i]==')')
            {
                if(!st.empty() && s[st.top()]=='(')
            }
                {
                    st.pop();
                }
                else 
                st.push(i);
        while(!st.empty())
        {
            s.erase(st.top(),1);
            st.pop();
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
class Solution {
"
