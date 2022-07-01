class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
      int res=0,currBatch=0;
    
//     ata arrray la ulta sort
        sort(boxTypes.begin(),boxTypes.end(),[](auto &a,auto &b){return a[1]>b[1];});
        
        for(auto &el:boxTypes){
            currBatch = min(el[0],truckSize);
            truckSize-=currBatch;
            res += currBatch*el[1];
             if(!truckSize) break;
        }
        
        return res;
    }
};