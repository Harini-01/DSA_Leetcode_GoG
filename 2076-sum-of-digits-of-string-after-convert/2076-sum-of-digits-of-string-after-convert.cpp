class Solution {
public:
    int getLucky(string s, int k) {
        
        int num=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            int n=int(s[i])-int('a')+1;
            while(n!=0)
            {
                num+=n%10;
                n=n/10;
            }

        }

        int sum=0;
        while(k>1)
        {   
            while(num!=0)
            {
                sum+=num%10;
                num=num/10;
            }
            num=sum;
            sum=0;
            k--;
        }
        return num;
    }
};