class Solution {
public:
    int totalFruit(vector<int>& f) {
    int ans=0;
    int j=0, n=f.size();
    map<int, int> m;
    
    for(int i=0; i<n; i++)
    {
        m[f[i]]++;
        if(m.size() <= 2)
        {
            ans=max(ans, (int)i-j+1);
        }
        else
        {
            while(m.size() > 2)
            {
                m[f[j]]--;
                
                if(m[f[j]]==0)
                    m.erase(f[j]);
                
                j++;
            }
        }
    }
    
    return ans;
}
};