class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> hashmap;
        
        for (char c : s) ++ hashmap[c];
        
        for (int i = 0; i < s.size(); ++i) {
            if(hashmap[s[i]] == 1) return i;
        }
        
        return -1;
    }
};
