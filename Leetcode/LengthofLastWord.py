class Solution:
    def lengthOfLastWord(self, s: str) -> int:

        s = s.strip()
        try: 
            sindex = s.rindex(" ")
            return len(s[sindex+1:])
        except:
            return len(s)
