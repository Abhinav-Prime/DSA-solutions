class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();int k=0,f=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {  f=1;
                k++;
            }
            else if(s[i]==' ' && f==1)
            break;
        }


        return k;
        }
};
"
