#include <iostream>

using namespace std;

int maxVowels(string s, int k) {
    string vowels="aeiou";
    int count=0;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(s[i]==vowels[j])
            {
                count++;
                break;
            }
        }
    }

    int maxvowels=count;
    for(int i=k;i<s.length();i++)
    {
        for(int j=0;j<5;j++)
        {
            if(s[i]==vowels[j])
            count++;
            if(s[i-k]==vowels[j])
            count--;
        }
        maxvowels=max(maxvowels,count);
    }
    return maxvowels;
}

int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    cout<<maxVowels(s,k);
    return 0;
}
