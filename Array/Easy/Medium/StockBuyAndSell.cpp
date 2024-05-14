class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size=prices.size();
        if(size==0)
         return -1;
        int profit=0;
        int minimum=prices[0];
        for(int i=1;i<size;i++)
        {
            int cost=prices[i]-minimum;
            profit=max(profit,cost);
            minimum= min(minimum,prices[i]);
        }
        return profit;
    }
};