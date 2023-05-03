#include<bits/stdc++.h>
using namespace std;
unordered_map <int, list<pair<int,int>>> adj;
class graph{
    public:
        void createadj(int u,int v, int wt){
            adj[u].push_back({v,wt});
        }
};
void dfs(int node,unordered_map <int, list<pair<int,int>>> adj,unordered_map <int, bool> &vis, stack <int> &s){
    vis[node]= 1;
    for(auto i : adj[node]){
        if(!vis[i.first]){
            dfs(i.first,adj,vis,s);
        }
    }
    s.push(node);
}

void shortest_path(vector<int> &ans, stack <int> &s, int src,unordered_map <int, list<pair<int,int>>> adj ){
    ans[src] = 0;
    while(!s.empty()){
        int frontnode = s.top();
        s.pop();
        // if(ans[frontnode]!= 1e9){
            for(auto i : adj[frontnode]){
                if(ans[frontnode] + i.second < ans[i.first]){
                    ans[i.first] = ans[frontnode] + i.second;
                }
                // ans[i.first] = min(ans[i.first],i.second+ans[frontnode]);
            }
        }
    // }
}
int main(){
    graph g;
    int edges,u,v,wt,vertices;
    cin>>edges>>vertices;
    
    //creating the adjacency list
    for(int i=0;i<edges;i++){
        cin>>u>>v>>wt;
        g.createadj(u,v,wt);
    }

    //find the topological sort
    unordered_map <int, bool> vis;
    stack <int> s;

    for(int i=0;i<vertices;i++){
        if(!vis[i])     dfs(i,adj,vis,s);
    }

    //use the topological sort array to prepare the distance array
    vector <int> ans(vertices, 1e9);
    int src;
    // cout<<"Enter the src node";
    cin>>src;
    shortest_path(ans,s, src, adj);

    // cout<<"The shortest path from the mentioned source to every node is : ";
    for(auto i : ans){
        cout<<i<<" ";
    }
    return 0;
}

// 9 6
// 0 1 5
// 0 2 3
// 1 2 2
// 1 3 6
// 2 3 7
// 2 4 4
// 2 5 2
// 3 4 -1
// 4 5 -2
// 1