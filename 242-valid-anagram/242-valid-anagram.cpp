class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector<int> hsh(26,0);
        for(int i=0;i<s.size();i++){
            hsh[s[i]-'a']++;
            hsh[t[i]-'a']--;
        }
        
        for(int i=0;i<26;i++){
            if(hsh[i]) return false;
        }
        return true;
    }
};