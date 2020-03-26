class Solution:
    def firstUniqChar(self, s: str) -> int:
        hashmap = {}
        
        for i, w in enumerate(s):
            if w not in hashmap: 
                num = s.count(w)
                if num == 1: return i
                else: hashmap[w] = num
            else:
                pass

        
        return -1
