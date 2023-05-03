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
void bfsofgraph(vector<int> &ans,unordered_map<int, bool> &visited,int node, unordered_map <int, list<int>> &adj){
    queue<int> q;
    q.push(node);
    visited[node]=1;

    while(!q.empty()){
        int frontnode = q.front();
        q.pop();
        ans.push_back(frontnode);

        for(auto i : adj[frontnode]){
            if(!visited[i]){
                visited[i]=1;
                q.push(i);
            }
        }
    }
}
vector<int> bfs(int edges, int vertices, unordered_map<int, list<int>> adj){
    unordered_map<int, bool> visited;
    //can also just be made like an array
    
    vector<int> ans;
    for(int i=0;i<vertices;i++){
        if(visited[i]!=1){
            bfsofgraph(ans, visited, i, adj);
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
    vector<int> answer =  bfs(edges, vertices,adj);
    cout<<"The bfs of the graph is : ";
    for(auto i : answer){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Adjacency list of the graph is : ";
    g.printgraph();
    return 0;
}