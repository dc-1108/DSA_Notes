#include <iostream>

using namespace std;
bool isSubsequence(string s, string t) {
    if(t.length()==0 && s.length()==0) return true;
    for(int i=0,j=0;i<t.length();i++)
    {
        if(s[j]==t[i])
        j++;
        if(j==s.length()) return true;
    }
    return false;
}
int main()
{
    string s,t;
    cin>>s;
    cin>>t;
    if(isSubsequence)
    cout<<"Yes first string is a subsequence of the first string";
    else
    cout<<"Not a subsequence";

}