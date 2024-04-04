class Solution {
public:
    int maxDepth(string s) {
        int n=s.length();
        int c=0,maxi=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
        }
            {
                c++;
            }

                maxi=max(maxi,c);
            else if(s[i]==')')
            {
                c--;
            }
    }
            else
            continue;
        return maxi;
};
"
