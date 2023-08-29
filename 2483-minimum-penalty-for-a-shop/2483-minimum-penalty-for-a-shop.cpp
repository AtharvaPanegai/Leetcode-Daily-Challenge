class Solution {
public:  
    int bestClosingTime(string customers){
        int n = customers.size();
        int index=-1,maxCount=0,count=0;
        for(int i=0;i<n;i++){
            if(customers[i] == 'Y'){
                count++;
            }else{
                count--;
            }
            
            if(count>maxCount){
                maxCount=count;
                index=i;
            }
        }
        return index+1;
    }
};