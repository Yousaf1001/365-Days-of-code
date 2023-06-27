There are only optimle and Brute force Approach to solve  this problem
1)Optimization solution:
   
    For Checking Optimle solution detail visit website
    website_URL:https://takeuforward.org/data-structure/remove-duplicates-in-place-from-sorted-array/

   #### Time and space complexity 
   time complexity : O(n)
   space complexity:O(1)



class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
            {
                index++;
                nums[index]=nums[i];
            }
        }
        return index+1;
    }
};

2)Brute Force approach 
    For Checking Optimle solution detail visit website
    website_URL:https://takeuforward.org/data-structure/remove-duplicates-in-place-from-sorted-array/

   #### Time and space complexity 
   time complexity : O(nlogn+n)
   space complexity:O(n)
  