Problem has been solved in three ways.
1)Brute force solution:
explaination:
   1) First generates all subArrays.
   2)Now find subArrays whose sum are equal to K
   3)Now find subArrays whose length is largest.
   4)Return length of largest of subArrays.
   #### Time and space complexity 
   time complexity : O(N*N*N)
   space complexity:O(1)
   after some modification its becomes:
   O(N*N)
   space complexity:O(1)

Codd:
    int subarraySum(vector<int>& nums, int k) {
        if(nums.size()==0)
            return -1;
        int length=0;
        for(int i=0;i<nums.size();i++)
        {
            int sum=0;
            for(int j=i;j<nums.size();j++)
            {
                sum+=nums[j];
                if(sum==k)
                  length=max(length,(j-i)+1);
            }
        }
        return length;
    }
//I dont' Code better solution till now.Because, My desire  to first Understand hashig concept.Then later,solve it.
2)Better Solution:
we use reverse Math and hashing in better solution.
explaination:
   Note:(if There exits a subArray with sum k as (.) by x-k.We get subArray)
   1)First create a map,prefixSum variable and length variable.
   2)Now check any prefix(beyond some (.) point) is (x-k).If yes,then we get subArray.
   3) Now find length of selected subArray by((x-k)->index-(.)->index).
   4)Now compares, this alread store length value and update on basis of larger value.
   5)after all iteration,We have length of largest subArray in largest variable.

Note:Edge case: 
  This technique is not working in case of array has negative or zero value elements.
  by solving this.We use this 
   
   #### Time and space complexity 
   time complexity : O(2n)
   space complexity:O(1)

3)optimization Solution:
    Two Pointer approach is used to solve problem.
explaination:
   1)Move first pointer on right side.It's means sum is also increase.
   2)When sum is larger then k.
   3) Then trim array  from back and move second pointer on right side till sum becomse less then k or j<sizeOfArray.
   4)along with all this,Check when sum is equal to k.
   5)Find length(i-j+1) and compare already store value of length in length variable.
   6)Update length variable on the basis of largest length values.
   #### Time and space complexity.
code:
    int subarraySum(vector<int>& nums, int k) {
        if(nums.size()==0)
            return -1;
        int maxLen=0;
        int sum=0;
        int left=0;
        for(int right=0;right<nums.size();right++)
        {
            sum=sum+nums[right];
            while(sum>k && left<=right)
            {
                sum=sum-nums[left];
                left++;
            }  
            if(sum==k)
               maxLen=max(maxLen,right-left+1);
        }
        return maxLen;
    }
   time complexity : O(2N)
   space complexity:O(1)
