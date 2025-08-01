#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector <int> graph[N];
bool visited[N];

void dfs(int node)
{
    visited[node]=1;
    for(int i=0; i<graph[node].size(); ++i)
    {
        int next=graph[node][i];

        if(visited[next]==0)
            dfs(next);
    }
}

int main()

{
    int n,k;
    cin>>n>>k;

    for(int i=1; i<n; i++)
    {
        int a;
        cin>>a;
        graph[i].push_back(i+a);
    }
    dfs(1);
    if(visited[k]==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}
