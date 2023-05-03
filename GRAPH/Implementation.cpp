#include<bits/stdc++.h>
#include<unordered_map>
#include<list>
using namespace std;
class graph{
    public:
    unordered_map<int, list<int>> adj;
    void addedges(int u, int v, bool direction){
        //this is how we prepare the adjacency list of the graph
        //direction ->false or 0 means undirected graph else directed.
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

int main(){
    int edges, vertices; 
    cin>>edges>>vertices;
    
    graph g;
    int u, v;
    for(int i=0;i<edges;i++){
        //for every edge define the adj list
        cin>>u>>v;
        g.addedges(u,v,0);
    }

    //printing the graph
    g.printgraph();

    return 0;
}