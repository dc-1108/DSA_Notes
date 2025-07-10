class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int a=nums[0];
        int b=nums[0]>nums[1]?nums[0]:nums[1];
        if(n==2) return b;
        int temp=0;
        for(int i=2;i<n-1;i++)
        {
            temp=nums[i]-nums[i-1];
            if(temp<0) temp=0;
            if((a+nums[i])>(b+temp))
            {
                temp=b;
                b=a+nums[i];
                a=temp;
            }
            else
            {
                a=b;
                b=b+temp;
            }
        }
        int max=b;
        a=nums[1];
        b=nums[2];
        for(int i=3;i<n;i++)
        {
            temp=nums[i]-nums[i-1];
            if(temp<0) temp=0;
            if((a+nums[i])>(b+temp))
            {
                temp=b;
                b=a+nums[i];
                a=temp;
            }
            else
            {
                a=b;
                b=b+temp;
            }
        }
        return max>b?max:b;
    }
};