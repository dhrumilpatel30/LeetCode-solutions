class Node{
    public:
    vector<int> childs;
};
class Solution {
public:
    void dfs(int index, int tillnow, vector<Node>& list, vector<int>& informTime){
        for(int child: list[index].childs){
            dfs(child, tillnow+informTime[index], list, informTime);
        }
        ans = max(ans,tillnow+informTime[index]);
    }
    int ans;
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        ans = 0;
        Node a;
        vector<Node> list(n,a);
        for(int i=0;i<n;i++){
            if(i == headID)continue;
            list[manager[i]].childs.push_back(i);
        }
        dfs(headID, 0, list,informTime);
        return ans;
    }
};