/* Detect cycle in undirected graph using BFS */
#include <bits/stdc++.h>
#define pb push_back
using namespace std;
bool detectcycle(vector<int>adj[],int n){
	int visited[n]={0};
	queue<pair<int,int>>q;
	for(int i=0;i<n;i++){
	  if(!visited[i]){
	  	visited[i]=1;
	  	q.push({i,-1});
	  	while(!q.empty()){
	  		int node=q.front().first;
	  		int parent=q.front().second;
			q.pop();
	  		for(int i=0;i<adj[node].size();i++){
	  			if(!visited[i]){
	  				visited[i]=1;
	  				q.push({i,node});
				  }
				  else if(parent!=i)
				   return true;
			  }
		  }
	  }	
	}
	return false;
}
int main(){
	int n,m,u,v;
	cin>>n>>m;
	vector<int>adj[n];
	while(m--){
		cin>>u>>v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	cout<<detectcycle(adj,n)<<endl;
}
