#include<bits/stdc++.h>
using namespace std;
class graph{
public:
    int node;
    int vertex;
    unordered_map<int, list<pair<int,int>>> adj;
    graph(int n, int v){
        node=n;
        vertex=v;
    }
    void prepareadj(int u,int v,int wt){
        adj[u].push_back({v,wt});
    }
    void shortest_path_dijkstra(int vertices){
    //declare set
    set <pair<int,int>> s;
    int src;
    cin>>src;
    s.insert({0,src});

    vector<int> dist(vertices,1e9);
    dist[src]=0;
    while(!s.empty()){
        pair<int,int> frontnode = *(s.begin());
        s.erase(s.begin());
        for(auto i : adj[frontnode.second]){
            if(frontnode.first + i.second < dist[i.first]){
                //erase the already existing pair for that node in the set
                auto j = s.find({dist[i.first],i.first});
                if(j!=s.end()){
                    s.erase(j);
                }
                //update the distance
                dist[i.first] =frontnode.first + i.second;
                s.insert({dist[i.first],i.first});
            }
        }
    }
    // cout<<"->";
    for(auto i : dist){
        cout<<i<<" ";
    }
    }
};

int main(){
    int edges, vertices,u,v,wt;
    cin>>vertices>>edges;
    graph *g = new graph(edges,vertices);
    
    //prepare adjacency list
    for(int i =0;i<edges;i++){
        cin>>u>>v>>wt;
        g->prepareadj(u,v,wt);
        g->prepareadj(v,u,wt);
    }

    g->shortest_path_dijkstra(vertices);
    return 0;
}