class Solution {
public:
    bool repeatedSubstringPattern(string s) {
     int size = s.size();
        
    string preFix = s.substr(1,size-1);
    string postFix = s.substr(0,size-1);
        
    string sFold = preFix+postFix;
        
    return sFold.find(s) != string::npos;
    }
};