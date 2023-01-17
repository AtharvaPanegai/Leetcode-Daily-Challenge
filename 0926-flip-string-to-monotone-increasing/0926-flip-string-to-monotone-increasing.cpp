class Solution {
public:
    int minFlipsMonoIncr(string s,int res=INT_MAX) {
       vector<int> f0(s.size() + 1), f1(s.size() + 1);
    for (int i = 1, j = s.size() - 1; j >= 0; ++i, --j) {
        f0[i] += f0[i - 1] + (s[i - 1] == '0' ? 0 : 1);
        f1[j] += f1[j + 1] + (s[j] == '1' ? 0 : 1);
    }
    for (int i = 0; i <= s.size(); ++i) res = min(res, f0[i] + f1[i]);
    return res;
    }
};