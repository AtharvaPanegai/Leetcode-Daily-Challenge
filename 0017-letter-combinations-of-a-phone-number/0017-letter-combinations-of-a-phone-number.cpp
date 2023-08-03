class Solution {
public:
    const vector<string> pad = {
        "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
    };
    
    vector<string> letterCombinations(string digits) {
        if(digits.empty())return{};
        vector<string> res;
        res.push_back("");
        
        for(auto num:digits){
            vector<string> tmp;
            for(auto numTwo:pad[num-'0']){
               for(auto s:res){
                   tmp.push_back(s+numTwo);
               }
            }
            res.swap(tmp);
        }
        return res;
    }
};