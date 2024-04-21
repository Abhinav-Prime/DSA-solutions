            char ch = tolower(word[i]);
            if (islower(word[i])) {
                m1[ch] = i;
            }
            else
            {
                if (m2.find(ch) == m2.end()) {
                    m2[ch] = i;
                }
            }
        }
        int c= 0;
        for (auto &p : m1) {
            if (  p.second < m2[p.first] && m2.find(p.first) != m2.end()) {
                c++;
            }
        }
        for (int i = 0; i <n; i++) 
        {
    int numberOfSpecialChars(string word) {
        int n=word.size();
         unordered_map<char, int> m1,m2;
class Solution {
public:
"aaAbcBC"
