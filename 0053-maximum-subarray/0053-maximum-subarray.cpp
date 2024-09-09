class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int res=nums[0];
        int sum=0;
       /* for(int j=0;j<nums.size();j++)
        {
        sum=0;
        for(int i=j;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum>res)
            {
                res=sum;
            }
        }
        }
        return res;
    
*/
    //Kadane's algorithm
    for(int i=0;i<nums.size();i++)
    {
        sum+=nums[i];
        res=max(sum,res);
        if(sum<0)
        {
            sum=0;
        }
    }
    return res;
    }
};