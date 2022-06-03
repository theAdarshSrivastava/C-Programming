#include<bits/stdc++.h>
using namespace std;

const int N=1e3+10;
vector<int> graph2[N];
bool visited[N];

void dfs(int vertex)
{
    cout<<vertex<<"\n";
    visited[vertex]=true;
    for(int child:graph2[vertex])
    {
        cout<<"parent:"<<vertex<<" child:"<<child<<endl;
        if(visited[child]) continue;
        dfs(child);
    }
}
int main()
{
    int m,n;
    cin>>m>>n;
    for(int i=0;i<n;i++)
    {
        int v1,v2;
        cin>>v1>>v2;

        graph2[v1].push_back(v2);
        graph2[v2].push_back(v1);
    }
    dfs(1);
    return 0;
}
