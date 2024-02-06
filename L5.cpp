

/*DFS of a Graph

class Solution {
    
  private:
    void dfs(int node,vector<int>adj[],int vis[],vector<int>&ans){
        vis[node]=1;
        ans.push_back(node);
        //Traverse all neighbours
        
        for(auto it:adj[node]){
            if(!vis[it]){
                dfs(it,adj,vis,ans);
            }
        }
    }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        int vis[V]={0};
        
        int start=0;
        vector<int>ans;
        dfs(start,adj,vis,ans);
        return ans;
        
    }
};

*/
