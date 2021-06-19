/* Shortest path for each vertex from 0(initial vertex) */
/* It can only be calculated via BFS */
#include <bits/stdc++.h>
using namespace std;

void bfs(vector<int>adj[],int n){
 queue<int>q;
 vector<int>visited(n,0);
 vector<int>distance(n);

 for(int i=0;i<n;i++)
  distance[i]=INT_MAX;

 for(int i=0;i<n;i++){
  if(!visited[i]){
   visited[i]=1;
   distance[i]=0;
   q.push(i);

   while(!q.empty()){
      int temp=q.front();
      q.pop();
      for(int i=0;i<adj[temp].size();i++){
        if(!visited[adj[temp][i]]){
          visited[adj[temp][i]]=1;
          distance[adj[temp][i]]=min(distance[adj[temp][i]],1+distance[temp]);
          q.push(adj[temp][i]);
        }
      }
    }}}
  for(int i=0;i<n;i++)
   cout<<distance[i]<<" ";
 }

int main() {
	// your code goes here
    int m,n,u,v;
    cin>>n>>m;
    vector<int>adj[n];
    while(m--){
      cin>>u>>v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }
  bfs(adj,n);
	return 0;
}
