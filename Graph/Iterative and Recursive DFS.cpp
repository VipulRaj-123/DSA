 #include <bits/stdc++.h>
 #define pb push_back
 using namespace std;

 vector<int> iterativedfs(vector<int>adj[] , int n){
  vector<int>v;
  stack<int>st;
  bool visit[n]={0};

  for(int i=0;i<n;i++){
    if(!visit[i]){
      visit[i]=1;
      st.push(i);

    while(!st.empty()){
      int temp=st.top();
      st.pop();
      v.push_back(temp);

   for(int i=0;i<adj[temp].size();i++){
      int res=adj[temp][i];
      if(!visit[res]){
        visit[res]=1;
        st.push(res);}}
   }}}
   return v;
  }
  void dfs(vector<int>&vec,vector<int>adj[],int start,vector<int>&visited){ /*This can only work when graph is connected. For disconnected graph we have to do dfs for
                                                                            every vertex*/
         visited[start]=1;
          vec.push_back(start);
        for(int i=0;i<adj[start].size();i++){
             int res=adj[start][i];
             if(!visited[res])
                dfs(vec,adj,res,visited);
         }
  }

int main() {
	// your code goes here
    int n,m,u,v;
    cin>>n>>m;
    vector<int>adj[n];
    vector<int>visited(n,0);

    while(m--){
     cin>>u>>v;
     adj[u].pb(v);
     adj[v].pb(u);
   }
   vector<int>nums(n);
   vector<int>vec;
   nums=iterativedfs(adj,n);
   dfs(vec,adj,0,visited);

   for(int i=0;i<n;i++)
     cout<<vec[i]<<" ";
   cout<<endl;

  for(int i=0;i<n;i++)
   cout<<nums[i]<<" ";
	return 0;
}
