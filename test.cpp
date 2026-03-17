#include <iostream>
#include<list>
#include<vector>
#include<queue>

using namespace std;
class Graph{
    int V;
    list<int>*l;
    public:
    Graph(int v){
        this->V = v;
        l = new list<int>[V];
    }
    void AddEdge(int u , int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void dfs(){
        queue<int>q;
        vector<bool>visited(V,false);
        q.push(0);
        visited[0] = true;
        while(q.size()>0){
            int u = q.front();
            q.pop();
            cout<<u<<" ";
        for(int v : l[u]){
            if(!visited[v]){
                visited[v] = true;
                q.push(v);
            }
        }
        }
        cout<<endl;
    }

};

int main(){
    Graph g(5);
    g.AddEdge(0,1);
    g.AddEdge(1,2);
    g.AddEdge(1,3);
    g.AddEdge(2,3);
    g.AddEdge(2,4);
    g.dfs();




             

return 0;
}