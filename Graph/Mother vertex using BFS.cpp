/* Given a Directed Graph, find a Mother Vertex in the Graph (if present). 
A Mother Vertex is a vertex through which we can reach all the other vertices of the Graph. */
int findMotherVertex(int v, vector<int>adj[])
	{
	    // Code here
	    queue<int>q;
	    vector<int>visited(v,0);
	    for(int i=0;i<v;i++){
	        int count=0;
	        if(!visited[i]){
	            visited[i]=1;
	            q.push(i);
	            count++;
	            while(!q.empty()){
	                int node=q.front();
	                q.pop();
	                for(int i=0;i<adj[node].size();i++){
	                    int child=adj[node][i];
	                    if(!visited[child]){
	                        visited[child]=1;
	                        q.push(child);
	                        count++;
	                    }
	                }
	            }
	        }
	        if(count==v)
	         return i;
	    }
	    return -1;
	}

