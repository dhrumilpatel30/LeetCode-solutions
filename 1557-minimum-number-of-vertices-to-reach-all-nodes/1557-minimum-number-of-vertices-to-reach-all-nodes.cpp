class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<bool> ans(n,false);
        vector<bool> visit(n,false);
        for(vector<int> edge:edges){
            visit[edge[1]]=true;
            if(ans[edge[1]]){
                ans[edge[1]]=false;
                cout<<"yes"<<edge[1];
            }
            if(visit[edge[0]])continue;
            visit[edge[0]]=true;
            
            if(!ans[edge[0]]){
                ans[edge[0]]=true;
                cout<<"yes"<<edge[1];
            }
        }
        vector<int> your_ans;
        for(int i=0;i<n;i++){
            if(ans[i])your_ans.push_back(i);
        }
        return your_ans;
    }
};