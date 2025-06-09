#include<iostream>
#include<vector>

using namespace std;

int search(vector<int>& nums, int target) {
    int n = nums.size();
    int index = 0;

    if (target == nums[index])
        return index;

    for (int i = n - 1; i > 0;) {
        int checkIndex = index + i;
        if (checkIndex >= n) {
            i /= 2;
            continue;
        }

        if (target == nums[checkIndex])
            return checkIndex;

        // handle rotated array logic (minimal corrections)
        if ((target >= nums[0] && nums[checkIndex] >= nums[0] && target < nums[checkIndex]) ||
            (target < nums[0] && nums[checkIndex] >= nums[0])) {
            i /= 2;
        } else {
            index = checkIndex;
            i /= 2;
            if (i == 0) i = 1;
        }
    }

    return -1;
}


int main()
{
    int target;
    cin>>target;
    int n;
    vector<int> nums;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }

    int flag=search(nums,target);
    if(flag==-1)
    cout<<"target is not present in the list of numbers"<<endl;
    else
    cout<<"target is present at the position "<<flag<<endl;
    
}
