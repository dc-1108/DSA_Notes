class Solution {
public:
    bool cyc = false;

    void recurse(int index, vector<int> v[], int parent, vector<bool> &vis) {
        vis[index] = true;
        for (auto child : v[index]) {
            if (!vis[child]) {
                recurse(child, v, index, vis);
            } else if (child != parent) {
                cyc = true;
            }
        }
    }

    bool iscyc(int V, vector<vector<int>>& edges) 
    {
        vector<int> v[V];
        for (auto &pair : edges)
        {
            v[pair[0]].push_back(pair[1]);
            v[pair[1]].push_back(pair[0]);
        }
        vector<bool> vis(V, false);
        for (int i = 0; i < V; i++)
        {
            if (!vis[i]) {
                recurse(i, v, -1, vis);
                if (cyc) return true;
            }
        }
        return cyc;
    }
};