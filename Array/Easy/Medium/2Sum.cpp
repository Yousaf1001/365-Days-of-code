class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int sizeOfArray=nums.size();
       if(sizeOfArray==0)
           return {-1,-1};
        map<int,int>mpp;
       for(int i=0;i<sizeOfArray;i++) 
       {
           int more=target-nums[i];
           if(mpp.find(more)!=mpp.end())
           {
               return {mpp.find(more)->second,i};
           }
            mpp[nums[i]]=i;
       }
       return {-1,-1};
    }
};