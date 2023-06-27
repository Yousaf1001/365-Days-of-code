 int majorityElement(vector<int>& nums) {
        int size=nums.size();
        if(size==0)
           return -1;
        int elem;
        int cnt=0;
        for(int i=0;i<size;i++)
        {
            if(cnt==0)
            {
                elem=nums[i];
                cnt++;
            }
            else if(nums[i]==elem)
            {
              cnt++;
            }
            else 
            {
                cnt--;
            }
        }
        int count=0;
        for(int i=0;i<size;i++)
        {
            if(elem==nums[i])
              count++;
        }
        if(count>size/2)
            return elem;
        return -1;
    } 