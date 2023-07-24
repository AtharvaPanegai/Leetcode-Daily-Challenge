class Solution {
public:
    double myPow(double x, int n) {
//         initlize the ans variable and nn variable to store the value of n as it will can be destroyed in the function
        double ans = 1.0;
//         we are using long long as it the edge case of int can cause error
        long long nn = n;
//         we'll do the operation till nn=0;
        if(nn<0){
            nn = -1*nn;
        }
        while(nn){
            if(nn%2){
                ans = ans*x;
                nn = nn-1;
                
            }else{
                x = x*x;
                nn = nn/2;
                
            }
            
        }
        if(n<0){
            ans = (double)(1.0)/(double)(ans);
        }
        return ans;
    }
};