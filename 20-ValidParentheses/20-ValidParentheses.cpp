                    {
                        st.pop();
                    }
                    else if(ch=='}' && ah=='{')
                    {
                    if(ch==')' && ah=='(')
                {
                    char ah=st.top();
                        st.pop();
                    }
                    else if(ch==']' && ah=='[')
                    {
                        st.pop();
                    }
                    else 
                    return false;
                }
                else
                return false;
              }
        }
        if(!st.empty())
        return false;
        else
"
