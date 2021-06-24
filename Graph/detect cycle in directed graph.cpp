/* Detect cycle in directed graph using Kahn's algorithm */
#include <bits/stdc++.h>
using namespace std;
bool cycleinDAG(vector<int>adj[],int v){
	queue<int>q;
	vector<int>indegree(v,0);
	for(int i=0;i<v;i++)
	 	for(int j=0;j<adj[i].size();j++)
	 	  indegree[adj[i][j]]++;
	
	for(int i=0;i<v;i++)
	  if(!indegree[i])
	   q.push(i);
	int count=0;   
	while(!q.empty()){
		int node=q.front();
		q.pop();
		count++;
		for(int i=0;i<adj[node].size();i++){
			indegree[adj[node][i]]--;
			if(!indegree[adj[node][i]])
			 q.push(adj[node][i]);
		}
	}
	if(count==v)
	 return false;
	return true;    
}
int main(){
  int n,m,u,v;
  cin>>n>>m;
  vector<int>adj[n];
  while(m--){
  	cin>>u>>v;
  	adj[u].push_back(v);
  }	
  cout<<cycleinDAG(adj,n)<<endl;
}
