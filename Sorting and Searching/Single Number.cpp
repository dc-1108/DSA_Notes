#include<iostream>
#include<vector>
using namespace std;
 int singleNumber(vector<int>& nums)\
{
    for(int i=1;i<nums.size();i++)
    {
        nums[0]=nums[0]^nums[i];
    }
    return nums[0];
}
int main()
{
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    cout<<singleNumber(nums);
    return 0;
}