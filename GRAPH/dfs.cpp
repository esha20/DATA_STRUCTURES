#include<bits/stdc++.h>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;
unordered_map <int, list<int>> adj;  //or can be done like :- vector<int>adj[]; or vector<vector<int>> adj;
class graph{
    public: 
    void prepareadj(int u, int v, int direction){
        //if direction is 0 then it is undirected
        adj[u].push_back(v);
        if(!direction){
            adj[v].push_back(u);
        }
    }
    void printgraph(){
        for(auto i : adj){
            cout<<i.first<<" -> ";
            for(auto j : i.second){
                cout<<j<<" , ";
            }
            cout<<endl;
        }
    }
};
void dfsofgraph(int node,unordered_map <int, list<int>> &adj,unordered_map <int, bool> &visited, vector<int> &ans){
    visited[node] = 1;
    ans.push_back(node);
    for(auto i : adj[node]){
        if(!visited[i]){
            dfsofgraph(i,adj,visited,ans);
        }
    }
}
vector<int> dfs(int edges, int vertices,unordered_map <int, list<int>> &adj){
    unordered_map <int, bool> visited;
    vector<int> ans;
    for(int i=0;i<vertices;i++){
        if(!visited[i]){
            dfsofgraph(i,adj,visited, ans);
        }
    }
    return ans;
}
int main(){
    int edges, vertices;
    cin>>edges>>vertices;

    graph g;

    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        g.prepareadj(u,v,0);
    }
    vector<int> answer =  dfs(edges, vertices,adj);
    cout<<"The dfs of the graph is : ";
    for(auto i : answer){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Adjacency list of the graph is : ";
    g.printgraph();
    return 0;
}