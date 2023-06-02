class Solution {
public:
    int bfs(vector<int> adj[],int i,int n,vector<int>&vis1){
        queue<int>q;
        vector<int> vis(n,0);
        q.push(i);
        vis1[i]=1;
        vis[i]=1;
        int count=1;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto j:adj[node]){
                if(!vis[j]){
                    q.push(j);
                    vis[j]=1;
                    vis1[j]=1;
                    count++;
                }
            }
        }
        return count;
    }
    int maximumDetonation(vector<vector<int>>& bombs) {
            int n=bombs.size();
        vector<int> adj[bombs.size()];
        for(int i=0;i<bombs.size();i++){
            int x=bombs[i][0];
            int y=bombs[i][1];
            long long r=bombs[i][2];
            for(int j=0;j<bombs.size();j++){
                    int X=bombs[j][0];
                    int Y=bombs[j][1];
                    int R=bombs[j][2];
                    long long diff1=abs(X-x);
                    long long diff2=abs(Y-y);
                double dist=sqrt(diff1*diff1+diff2*diff2);
                if(j!=i && (r>=dist)  ){
                    adj[i].push_back(j);
                }
            }
        }
        vector<int> vis1(n,0);
         
        queue<int> q;
        int mx=INT_MIN;
        for(int i=0;i<bombs.size();i++){
            if(!vis1[i])
            mx=max(mx,bfs(adj,i,bombs.size(),vis1));
        }
        return mx;
    }
};