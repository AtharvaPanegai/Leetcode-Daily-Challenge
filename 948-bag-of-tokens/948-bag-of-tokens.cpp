class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int points=0,i=0,j=tokens.size()-1,res=0;
        while(i<=j){
            if(power>=tokens[i]){
                power-=tokens[i++];
                res = max(res,++points);
            }else if(points>0){
                points--;
                power+=tokens[j--];
            }else {
                break;
            }
        }
        return res;
    }
};