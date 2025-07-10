#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> generate(int rows) {
    vector<vector<int>> pascal;
    vector<int> v;
    v.push_back(1);

    for(int i=1;i<=rows;i++)
    {
        vector<int> temp(v);
        // temp.push_back(1);
        v.clear();
        v.push_back(1);
        for(int j=1;j<i;j++)
        {
            if(j==i-1)
            v.push_back(1);
            else
            v.push_back(temp[j-1]+temp[j]);
        }
        pascal.push_back(v);
    }
    return pascal;
}


int main()
{
    int n;
    cin>>n;
    vector<vector<int>> v=generate(n);

    for (int i = 0; i < v.size(); ++i) {
        cout<<"{";
        for (int j = 0; j < v[i].size(); ++j) {
            cout << v[i][j] << ",";
        }
        cout <<"\b}"<< endl;
    }

}