/* You are given an m x n binary matrix grid. An island is a group of 1's (representing land) connected 4-directionally (horizontal or vertical.) You may assume all four edges of the grid are surrounded by water.
The area of an island is the number of cells with a value 1 in the island.

Return the maximum area of an island in grid. If there is no island, return 0.

Example 1:

Input: grid = [[0,0,1,0,0,0,0,1,0,0,0,0,0],[0,0,0,0,0,0,0,1,1,1,0,0,0],[0,1,1,0,1,0,0,0,0,0,0,0,0],[0,1,0,0,1,1,0,0,1,0,1,0,0],[0,1,0,0,1,1,0,0,1,1,1,0,0],[0,0,0,0,0,0,0,0,0,0,1,0,0],[0,0,0,0,0,0,0,1,1,1,0,0,0],[0,0,0,0,0,0,0,1,1,0,0,0,0]]
Output: 6
Explanation: The answer is not 11, because the island must be connected 4-directionally.
Example 2:

Input: grid = [[0,0,0,0,0,0,0,0]]
Output: 0  */

class Solution {
public:
    int dx[4]={-1,0,1,0};
    int dy[4]={0,1,0,-1};
void bfs(vector<vector<int>>& grid,int n,int m,int x,int y,vector<vector<int>>&visited,int&count ){
        queue<pair<int,int>>q;
        q.push({x,y});
        visited[x][y]=1;
        while(!q.empty()){
            int sx=q.front().first;
            int sy=q.front().second;
            q.pop();
            count++;
            for(int i=0;i<4;i++){
                int u=sx+dx[i];
                int v=sy+dy[i];
                if(u>=0&&u<=m-1&&v>=0&&v<=n-1&&!visited[u][v]&&grid[u][v]==1){
                    visited[u][v]=1;
                    q.push({u,v});
                }
            }
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
       int m=grid.size(),n=grid[0].size(),maxm=0;
        vector<vector<int>>visited(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!visited[i][j]&&grid[i][j]==1){
                    int count=0;
                    bfs(grid,n,m,i,j,visited,count);
                    maxm=max(count,maxm);}
            }
        }
        return maxm;
    }
};
