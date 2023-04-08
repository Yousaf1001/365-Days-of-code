You should Clearly Know about these Questions
1) What is the extra space use by your algorithem?
in case of  Optimization approach extra space has not used by our algorithem.
2) What is the space use by your algorithem?
in case of Optimization approach space has used by our algorithem is bigo(n)




Problem has been solved in three ways.
1)Brute force solution:
explaination:
`  4) First should must you take (d%n ) modulo.
   1)First store 0 to d element in temp array.
   2) Now shift (n-d) element to d places forward
   3) Now you put temp array elements into original from (i-(n-d)) index
   
   #### Time and space complexity 
   time complexity : O(d+n-d+d)
   space complexity:O(d)

Code:
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()==0)
            return ;
        if(k%nums.size()==0)
          return ;
        k=k%nums.size();

        int temp[nums.size()-k];
        for(int i=0;i<nums.size()-k;i++)
            temp[i]=nums[i];
        int index=0;
        for(int i=nums.size()-k;i<nums.size();i++)
        {
            nums[index++]=nums[i];
        }
        index=0;
        for(int i=k;i<nums.size();i++)
        {
            nums[i]=temp[index++];
        }  
    }
};

1)Optimization Solution:
explaination:
`  4)First reverse the array from 0 to d index.
   1)Second reverse the array from d to (n-1)
   2)Third reverse the array from 0 to (n-1)
   3) Now  has desired rotation performed.
   
   #### Time and space complexity 
   time complexity : O(2n)
   space complexity:O(1)

Code:
class Solution {
public:
    
    void rotate(vector<int>& nums, int k) {
        int a =k%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+a);
        reverse(nums.begin()+a,nums.end());
    }
};