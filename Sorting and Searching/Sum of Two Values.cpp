#include<iostream>
#include<algorithm>
//basically it is two sum of leetcode
using namespace std;

int main()
{
    int n,target;
    cin>>n;
    cin>>target;
    int array[n],temp[n];;

    for(int i=0;i<n;i++)
    {
        cin>>array[i];
        temp[i]=array[i];
    }

    sort(array,array+n);

    int first=array[0],last=array[n-1];
    int i=0,j=n-1;
    bool flag1=true;
    while(i<j)
    {
        if((first+last)==target)
        {
            for(int k=0;k<n;k++)
            {
                if(first==temp[k] && flag1)
                {
                    i=k+1;
                    flag1=false;
                }
                if(last==temp[k])
                {
                    j=k+1;
                }
            }

            cout<<(i<j?i:j)<<" "<<(i<j?j:i);
            return 0;
        }
        else if((first+last)>target)
        {
            j--;
            last=array[j];
        }
        else
        {
            i++;
            first=array[i];
        }
    }
    cout <<"IMPOSSIBLE";
    return 0;
}