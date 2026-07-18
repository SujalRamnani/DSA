class Solution {
public:
bool ans=true;
void dfs(vector<vector<int>>& adj,int node,int c,  vector<int> &colors){
    colors[node]=c; ///color kuch bhi ho sakta hai 0 ya 1
    for(int i=0;i<adj[node].size();i++){
        int neighbour=adj[node][i];
        if (colors[neighbour]!=-1 && colors[neighbour]==c) ans=false; //color ho chuka hai aur vo node ke color wala hi hai tab return false hoga
        if (colors[neighbour]==-1) dfs(adj,neighbour,1-c,colors); 
    }
    return ;
}
    bool isBipartite(vector<vector<int>>& adj) {
        int n=adj.size();
        vector<int> colors(n,-1);
        for(int i=0;i<n;i++){
            if (colors[i]==-1) dfs(adj,i,0,colors);
        }
        
        return ans;
        
    }
};