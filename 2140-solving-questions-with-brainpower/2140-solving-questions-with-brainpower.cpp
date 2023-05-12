class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        
        long long ans=0,n=questions.size();
        if(1 == n)return questions[0][0];
        vector<long long> ansdp(n,-1);
        ansdp[n-1]=questions[n-1][0];
        for(int i=n-2;i>=0;i--){
            ansdp[i] = ansdp[i+1];
            if(questions[i][1]+i+1 <= n-1){
                ansdp[i] = max(ansdp[i],ansdp[questions[i][1]+i+1] + questions[i][0]);
            }
            else{
                ansdp[i] = max(ansdp[i],(long long)questions[i][0]);
            }
            ans = max(ansdp[i],ans);
        }
        return ans;
    }
};