/* Checking for bipartite graph using BFS */
#include <bits/stdc++.h>
using namespace std;

bool bipartite(vector<int>adj[],int n){
  int colour[n]={0};
  queue<int>q;

  for(int i=0;i<n;i++){
    if(!colour[i]){ //If ith vertex in uncoloured
     colour[i]=1;
     q.push(i);
   
  while(!q.empty()){
    int temp=q.front();
     q.pop();
    for(int i=0;i<adj[temp].size();i++){
      int res=adj[temp][i];
      if(!colour[res]){
        colour[res]=3-colour[temp];/* Instead of 3 we can take any value except 2 and 1 as 1 will result in 0 
                                      and 2 will result in 1 again */ 
         q.push(res);    
        }
      else if(colour[temp]==colour[res]) /* If colour of parent vertex and its adjacent vertex is same that means graph is not bipartite */
        return false;
   }
  }
 }
}
return true;
}
    
int main() {
	int u,v,m,n;
	cin>>n>>m;
	vector<int>adj[n];
	while(m--){
	   cin>>u>>v;
	   adj[u].push_back(v);
	   adj[v].push_back(u);	
	}  
	cout<<bipartite(adj,n)<<endl;
 return 0;
}
