#include <iostream>
#include <vector>

using namespace std;

int singleNonDuplicate(vector<int>& nums) {
    int lower =0;
    int higher= nums.size()-1;

    while(lower<higher)
    {
        if((higher-lower+1)%4==3)
        {
            int mid=(lower+higher)/2;
            if(nums[mid]==nums[mid-1])
            lower=mid+1;
            else if(nums[mid]==nums[mid+1])
            higher=mid-1;
            else
            return nums[mid];
        }
        else
        {
            int mid=(lower+higher)/2;
            if(nums[mid]==nums[mid+1])
            lower=mid+2;
            else if(nums[mid]==nums[mid-1])
            higher=mid-2;
            else
            return nums[mid];
        }
    }
    return nums[lower];
}

int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }

    cout<<singleNonDuplicate(nums);

    return 0;
}