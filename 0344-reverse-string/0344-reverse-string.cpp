class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> st;
        vector<char> ans;
        
        for(int i=0;i<s.size();i++){
            st.push(s[i]);
        }
        
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        
        s = ans;
    }
};