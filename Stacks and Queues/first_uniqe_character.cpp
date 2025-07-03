#include<iostream>
#include<queue>
using namespace std;

int firstUniqChar(string s)
{
    int  arr[26]={};

    for(int i=0;i<s.length();i++)
    arr[s[i]-'a']++;

    for(int i=0;i<s.length();i++)
    {
        if(arr[s[i]-'a']==1)
        return i;
    }
    return -1
}

int main()
{
    string s;
    cin>>s;
    cout<<firstUniqChar(s)<<endl;
    return 0;
}