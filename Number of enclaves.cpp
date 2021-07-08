class Solution {
public:
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
/* You are given an m x n binary matrix grid, where 0 represents a sea cell and 1 represents a land cell.
A move consists of walking from one land cell to another adjacent (4-directionally) land cell or walking off the boundary of the grid.

Return the number of land cells in grid for which we cannot walk off the boundary of the grid in any number of moves.

Example 1:

Input: grid = [[0,0,0,0],[1,0,1,0],[0,1,1,0],[0,0,0,0]]
Output: 3
Explanation: There are three 1s that are enclosed by 0s, and one 1 that is not enclosed because its on the boundary.
Example 2:

Input: grid = [[0,1,1,0],[0,0,1,0],[0,0,1,0],[0,0,0,0]]
Output: 0
Explanation: All 1s are either on the boundary or can reach the boundary.*/
bool bfs(vector<vector<int>>&grid,int m,int n,int i,int j,vector<vector<int>>&visited,int&count){
    bool result=true;
    queue<pair<int,int>>q;
    q.push({i,j});
     visited[i][j]=1;
    while(!q.empty()){
     int x=q.front().first;
     int y=q.front().second;
     if(x==0||y==0||x==m-1||y==n-1)
       result=false;
        count++;
     q.pop();
     for(int k=0;k<4;k++){
        int u=x+dx[k];
        int v=y+dy[k];
    if(u>=0&&u<=m-1&&v>=0&&v<=n-1&&!visited[u][v]&&grid[u][v]==1){
    visited[u][v]=1;
        q.push({u,v});}
     }}
    return result;
}
int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
vector<vector<int>>visited(m,vector<int>(n,0));
    int sum=0,count=0;
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
if(!visited[i][j]&&grid[i][j]==1)
{
    if(bfs(grid,m,n,i,j,visited,count))
        sum+=count;
    count=0;
    }}}
    return sum;
}
};
