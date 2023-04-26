There are only optimle Approach to solve  this problem.
1)Optimization solution:
explaination:
   1)Initialize count and largest variable with 0.
   2) Iterates array from 0 to till length of array.
   3) if it's  1, then increament count and check max(count,largest)
   4) if it's 0,then count fall back to zero.(count=0)
   5)After Iterates end,We have count of max consectiveOne's in largest variable.
   6)Now return it. 

   #### Time and space complexity 
   time complexity : O(n)
   space complexity:O(1)

code:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int largest=0;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1){
                count++;
                largest =max(largest,count);
            }
            else
                count=0;
        }
        return largest;
    }


For brute Force and Better solution check Websites.