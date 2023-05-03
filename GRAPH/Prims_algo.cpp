#include<bits/stdc++.h>
using namespace std;
class graph{
    public: 
        int node;
        int edge;

        unordered_map <int, list<pair<int,int>>> adj;
        
        graph(int n, int m){
            node =n;
            edge = m;
        }
        void prepare_adj(int u, int v, int wt){
            adj[u].push_back({v,wt});
        }
        int find_mini(vector<bool>mst,int v, vector<int> key){
            int mini =INT_MAX, u=0;
            for(int i=0;i<v;i++){
                if(key[i]<mini && mst[i]==false){
                    u = i;
                    mini = key[i];
                }
            }
            return u;
        }
        void shortest_path_prims(int vertex){
            
            vector<int> key(vertex,1e9);
            vector<int> parent(vertex,-1);
            vector<bool> mst(vertex,false);

            int src;
            cin>>src;

            key[src]=0;
            parent[src]=-1;

            for(int i=0;i<vertex;i++){
                int u = find_mini(mst,vertex,key);
                mst[u]= 1;
                for(auto i : adj[u]){
                    int v = i.first;
                    int wt = i.second;

                    if(mst[v]==false && key[v]>wt){
                        parent[v] = u;
                        key[v]= wt;
                    }
                }
            }
                int ans=0;
                for(auto i : key){
                    ans+=i;
                }
                cout<<ans;
        }
   
};

int main(){
    int vertex, edge, u, v, wt;
    cin>>vertex>>edge;
    graph *g = new graph(vertex,edge);

    for(int i=0;i<edge;i++){
        cin>>u>>v>>wt;
        g->prepare_adj(u,v,wt);
        g->prepare_adj(v,u,wt);
    }
    g->shortest_path_prims(vertex);

    // vector<pair<pair<int,int>,int>> result;
    // for(int i=0;i<v;i++){
    //     result.push_back({{parent[i],i},key[i]});
    // }
    return 0;
}