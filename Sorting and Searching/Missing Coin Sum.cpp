#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    vector<long long int> coins;

    for(long long int i=0;i<n;i++)
    {
        long long int temp;
        cin >>temp;
        coins.push_back(temp);
    }
    
    sort(coins.begin(),coins.end());

    if(coins[0]!=1)
    {
        cout<<1;
        return 0;
    }

    long long int target=2;
    long long int j=1;
    while (true)
    {

        if(j==n) break;

        if(target>coins[j]-1)
        {
            target+=coins[j];
            j++;
        }
        else
        break;

    }
    cout<<target;
}