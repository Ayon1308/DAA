#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:

    vector<int> bfsOfGraph(int V , vector<int> adj[]){
        //zero based indexing graph;

        //create a visited array

        int vis[V] = {0};
        vis[0] = 1;

        //create a queue and store the source node into it
        queue<int> q;
        q.push(0);

        vector<int> bfs;
        while(q.empty() == false){
            // to get the front node
            int node = q.front();
            //and pop the front node
            q.pop();
            bfs.push_back(node);

            //if the vertices are not visited 

            for(auto it:adj[node]){
                if(vis[it] == false){
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return bfs;
    }
};

void addEdge(vector<int> adj[] , int u , int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printBFS(vector<int> &ans){
    for(int i = 0 ; i <ans.size();i++){
        cout<<ans[i]<<" ";
    }
}

int main() {
    int V, E;
    cout << "Enter the total number of vertices in the graph: ";
    cin >> V;

    vector<int> adj[V];

    cout << "Enter the total number of edges in the graph: ";
    cin >> E;

    cout << "Enter the edges (u v) one by one:" << endl;
    for (int i = 0; i < E; ++i) {
        int u, v;
        cin >> u >> v;
        addEdge(adj, u, v);
    }

    Solution obj;
    vector<int> ans = obj.bfsOfGraph(V, adj);
    printBFS(ans);

    return 0;
}

