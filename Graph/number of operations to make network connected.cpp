/* There are n computers numbered from 0 to n-1 connected by ethernet cables connections forming a network where connections[i] = [a, b] represents a connection between computers a and b. Any computer can reach any other computer directly or indirectly through the network.
Given an initial computer network connections. You can extract certain cables between two directly connected computers, and place them between any pair of disconnected computers to make them directly connected. Return the minimum number of times you need to do this in order to make all the computers connected. If it's not possible, return -1. 

Example 1:

Input: n = 4, connections = [[0,1],[0,2],[1,2]]
Output: 1
Explanation: Remove cable between computer 1 and 2 and place between computers 1 and 3.
Example 2:

Input: n = 6, connections = [[0,1],[0,2],[0,3],[1,2],[1,3]]
Output: 2
Example 3:

Input: n = 6, connections = [[0,1],[0,2],[0,3],[1,2]]
Output: -1
Explanation: There are not enough cables.
Example 4:

Input: n = 5, connections = [[0,1],[0,2],[3,4],[2,3]]
Output: 0 */
void dfs(vector<int>adj[],int src,vector<int>&visited){
        visited[src]=1;
        for(int i=0;i<adj[src].size();i++){
            int res=adj[src][i];
            if(!visited[res])
                dfs(adj,res,visited);
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
      int m=connections.size();
        if(m<n-1)
            return -1;
        vector<int>adj[n];
        for(int i=0;i<m;i++){
          int u=connections[i][0];
          int v=connections[i][1];
          adj[u].push_back(v);
          adj[v].push_back(u);
    }
     vector<int>visited(n,0);
        int count=0;
     for(int i=0;i<n;i++){
         if(!visited[i]){
             dfs(adj,i,visited);
             count++;}
     }
        return count-1;
    }
