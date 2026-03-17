#include <iostream>
#include<queue>
#include<list>
using namespace std;

class Graph{
    public:

    int V;
    list<int>*l;  // or int *arr
    Graph(int v){
        this->V = v;
        l = new list<int>[v];
        // arr = new <int>[v];

    }
    void addEdge(int u  , int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void print(){
    for(int i = 0 ; i < V ; i++){
        cout<<i<<" : ";
        for(int neigh : l[i]){
            cout<<neigh<<" ";
            
        }
        cout<<endl;
    }
}
int bfsTaversal(){
    queue<int>q;
    vector<bool>visited(V,false);
    q.push(0);
    visited[0] = true;

    while( q.size() > 0){
        int u = q.front();
        q.pop();
        cout<<u<<" ";

        for(int v : l[u] ){
            if(!visited[v]){
                visited[v] = true;
                q.push(v);
            }
        }
}
cout<<endl;
}

};


using namespace std;

int main(){
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(2,4);
    // g.print();
    g.bfsTaversal();


             

return 0;
}