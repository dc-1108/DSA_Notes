#include<iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int n=nums.size()-1;
    int lower=0;
    while(lower<n)
    {
        int mid=(n+lower)/2;
        if(target==nums[mid])
        return mid;
        else if(target>nums[mid])
        lower=mid+1;
        else
        n=mid-1;
    }
    if(target>nums[lower])
    return lower+1;
    else
    return lower;
}

int main()
{
    int num;
    cin>>num;
    vector<int> nums;
    for(int i=0;i<num;i++)
    {
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    int target;
    cin>>target;
    cout<<searchInsert(nums,target);
    return 0;
}