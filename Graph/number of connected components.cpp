#include <bits/stdc++.h>
#define pb push_back
using namespace std;
void connectedcomponents(vector<int>adj[],int start,vector<int>&visited){
  if(!visited[start]){
  	visited[start]=1;
    for(int i=0;i<adj[start].size();i++){
    	if(!visited[adj[start][i]]){
    	   int newstart=adj[start][i];
    	   connectedcomponents(adj,newstart,visited);
       }
	 }
   }
  return; 
}
int main(){
	int n,m,u,v,count=0;
	cin>>n>>m;
	vector<int>visited(n,0);
	vector<int>adj[n];
	while(m--){
	  cin>>u>>v;
	  adj[u].pb(v);
	  adj[v].pb(u);	
	}
	for(int i=0;i<n;i++){
		if(!visited[i]){
		 connectedcomponents(adj,i,visited);
		  count++;
	    }
	}
	cout<<count<<endl;
	return 0;
}

