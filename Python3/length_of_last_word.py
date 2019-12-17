class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        length = 0
        flag = False
        
        for i in range(len(s)):
            if s[-1-i] != ' ': 
                length += 1
                flag = True
                continue
            else:
                if flag: break
                      
        return length
