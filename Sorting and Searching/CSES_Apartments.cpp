#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,m,k;
    int count=0;
    cin>>n;
    cin>>m;
    cin>>k;

    vector<int> people;
    vector<int> sizes;

    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        people.push_back(temp);
    }

   for(int i=0;i<m;i++)
    {
        int temp;
        cin>>temp;
        sizes.push_back(temp);
    }

    sort(people.begin(),people.end()); 
    sort(sizes.begin(),sizes.end());
    
    for(int i=0,j=0;i<n && j<m;)
    {
        if(abs(people[i]-sizes[j])<=k)
        {
            count++;
            i++;
            j++;
        }
        else if(people[i]<sizes[j]-k)
        i++;
        else
        j++;
    }
    
    cout<<count;
}