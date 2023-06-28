 int maxSubArray(vector<int>& nums) {
        int size=nums.size();
        if(size==0)
          return -1;
        int largestSum=nums[0];
        int sum=0;
        for(int i=0;i<size;i++)
        {
            sum+=nums[i];
            if(sum>largestSum)
             largestSum=sum;
            if(sum<0)
                sum=0;
        }
        return largestSum; 
    }