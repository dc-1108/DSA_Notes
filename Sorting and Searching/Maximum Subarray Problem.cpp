#include <iostream>

using namespace std;
// using sliding window
int main()
{
    long int n;
    cin>>n;
    long int array[n];
    for(long int i=0;i<n;i++)
    cin>>array[i];

    long int sum=array[0];
    long int maxsum=array[0];
    for(long int i=1;i<n;i++)
    {
        sum=max(array[i]+sum,array[i]);
        maxsum =max(sum,maxsum);
    }
    cout <<maxsum;
    return 0;
}