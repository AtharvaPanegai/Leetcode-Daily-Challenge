
string vowels = "aeiouAEIOU";
class Solution {
public:
    bool halvesAreAlike(string s) {
        int mid = s.size()/2;
        int count=0;
        for(int i=0,j = mid;i<mid;i++,j++){
            if(~vowels.find(s[i]))count++;
            if(~vowels.find(s[j]))count--;
        }
        return count==0;
    }
};