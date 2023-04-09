Problem has been solved in three ways.
But this problem have only two solution.
1)Brute force solution:
explaination:
`  4) First make new array and put all the non zero element in it.
   1)Now put all the temp element in the front of original Array note(we know temp only contain no zero element).
   2)Now put the zero in indexes that start from(temp.size()) to (nums.size())
   3) After doing all the three step you get your desire result.
   
   #### Time and space complexity 
   let x is no of non zero  element.
   time complexity : O(d(x)+d(n)+d(n-x)) it becomes bigo(2n) which is written as bigo(n)
   space complexity:O(n) in worst case all the element in original array is non zero

Code:
Visit websites
Web_URL:https://takeuforward.org/data-structure/move-all-zeros-to-the-end-of-the-array/

1)Optimization approach:
explaination:
`  1) First find zero element in the zero.Store it index in variable.
   2)if we not find zero element then it's there are not zero element in the array.Simply return from there.
   3)else if yes,Then start traversing original Array from (zeroIndex+1).
   4)Why we use (zeroIndex+1).becuase we know that  zero element start from zeroIndex .We can find no zero element from  (zeroIndex+1) onward.  for which i want to update.
   5) Now start traversing.In traversing when ever i find nonzero simply swap it with zeroIndex element and move zeroIndex one index ahead.

   
   #### Time and space complexity 
   let x indexes i move ahead first find zero in the array.
   time complexity : O(d(x)+d(n-x)) it becomes bigo(n).
   space complexity:O(1) i don't use space becuase i updat original array.

Code:
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==0 || nums.size()==1)
         return ;
        int zeroIndex=-1;
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]==0)
            {
                zeroIndex=j;
                break;
            }
        }
        if(zeroIndex==-1)
          return ;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0 && i>zeroIndex)
            {
                int temp=nums[i];
                nums[i]=nums[zeroIndex];
                nums[zeroIndex]=temp;
                for(int j=zeroIndex;j<nums.size();j++)
                {
                    if(nums[j]==0)
                    {
                        zeroIndex=j;
                        break;
                    }
                }
            }
        }

        
    }
};



I want find out very small and fast code :

note(In this code i don't find first zero in the array).

Code:
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};
