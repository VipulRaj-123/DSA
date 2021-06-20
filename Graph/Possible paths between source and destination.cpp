/* Possible paths between source and destination in directed graph */

void dfs(vector<int>adj[],int s,int d,int &count){
        if(s==d)
         count++;
        else{
            for(int i=0;i<adj[s].size();i++)
              dfs(adj,adj[s][i],d,count);
        } 
    }
	int countPaths(int V, vector<int> adj[], int s, int d)
	{
	    // Code here
	int count = 0;
    dfs(adj, s, d, count);
    return count;
	}
