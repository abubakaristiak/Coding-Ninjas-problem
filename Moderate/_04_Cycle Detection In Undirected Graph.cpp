// TODO: https://www.naukri.com/code360/problems/cycle-detection-in-undirected-graph_1062670?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
/*
#include<unordered_map>
#include <queue>
#include <list>

bool isCycleBFS(int src, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj)
{
    unordered_map<int, int> parent;

    parent[src] = -1;
    visited[src] = 1;
    queue<int> q;
    q.push(src);

    while(!q.empty()){
        int front = q.front();
        q.pop();

        for(auto child : adj[front]){
            if(visited[child] == true && child != parent[front]){
                return true;
            }
            else if(!visited[child]){
                q.push(child);
                visited[child] = 1;
                parent[child] = front; 
            }
        }
    }
    return false;
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // Write your code here.
    unordered_map<int, list<int>> adj;
    for(int i=0; i<m; i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    unordered_map<int, bool> visited;
    for(int i=0; i<n; i++){
        if(!visited[i]){
            bool ans = isCycleBFS(i,visited,adj);
            if(ans == 1){
                return "Yes" ;
            }
        }
    }
    return "No";
    
}

*/