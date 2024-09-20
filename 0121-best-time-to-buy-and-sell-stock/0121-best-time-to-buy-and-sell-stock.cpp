class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        //brute force approach
        /*
        int profit=0;
        int res=0;
        for(int i=0;i<prices.size();i++)
        {
            for(int j=i;j<prices.size();j++)
            {
                profit=prices[j]-prices[i];
                if(profit>res)
                {
                    res=profit;
                }
                if(profit<0)
                {
                    break;
                }
            }
        }
        return res;   
        */

        int minprice=INT_MAX;
        int maxpro=0;
        for(int i=0;i<prices.size();i++)
        {
            minprice=min(minprice,prices[i]);
            maxpro=max(maxpro,prices[i]-minprice);
        }     

        return maxpro;
    }
};