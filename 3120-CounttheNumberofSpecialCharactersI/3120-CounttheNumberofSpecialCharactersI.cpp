class Solution:
    def numberOfSpecialChars(self, word: str) -> int:
        b=[]
        s=[]
        count=0
        for i in word:
            if i.islower():
                s.append(i)
            else:
                b.append(i)
        s= list(set(s))
        b= list(set(b))
        for i in s:
            if chr(ord(i)-32) in b:
                count+=1
        return count
"aaAbcBC"
