//Brute force Approach 
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
    int size=nums.size();
    if(size==0 || size%2!=0)
      return nums;
    vector<int>pos;
    vector<int>neg;
    for(int i=0;i<size;i++)
    {
        if(nums[i]<0)
          neg.push_back(nums[i]);
        else
          pos.push_back(nums[i]);
    }
    for(int i=0;i<neg.size();i++)
    {
        nums[i*2]=pos[i];
        nums[i*2+1]=neg[i];
    }
    return nums;
}

};

//optimle approach 
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
    int size=nums.size();
    if(size==0 || size%2!=0)
      return nums;
    vector<int>ans(size);
    int pos=0;
    int neg=0;
    for(int i=0;i<size;i++)
    {
        if(nums[i]<0)
        {
           ans[neg*2+1]=nums[i]; 
           neg++;
        }
        else
        {
            ans[pos*2]=nums[i];
            pos++;
        }
    }
    return ans;
}
};