There are only optimle Approach to solve  this problem
Two Pointer Used In this Problem.

1)Optimization solution:
explaination:
   1)First check is Array empty.If it is,return -1.
   2)initiliaze two pointer high and low with zero.
   3) initiliaze mid with zero.
   4)Now check is low less then equal to high
   5) Now find the mid by using formula (high+low)/2.In this,you devide array in two subArray.
   6)check element at mid is equal to target.Then return it mid.
   7) If target element greater then element at mid.Then you should move your low =mid+1 ahead indexes.
   8) if target element is low then element at mid.Then move backward high by high=mid-1 indexes.
   9) This Loop run until low is becomes greater then high.
   10) if this happened.Then loop terminate,it's means you don't find your target element in array.
   11)Simply return -1.
   

   #### Time and space complexity 
   time complexity : O(nlogn)
   space complexity:O(1)

code:
class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==0)
           return -1;
        int low=0;
        int high=nums.size()-1;
        int mid =0;
        while(low<=high)
        {
            mid=(high+low)/2;
            if(nums[mid]==target)
               return mid;
            if(target<nums[mid])
                high=mid-1;
            else 
                low=mid+1;
        }
        return -1;
    }
};