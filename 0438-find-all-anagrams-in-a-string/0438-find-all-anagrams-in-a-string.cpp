class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> freq(26,0);
        vector<int> freq2(26,0);
        for(auto it:p) freq2[it-'a']++;
        int len = s.size();
        int win = p.size();
        int i = 0,j = 0;
        vector<int> ans;
        while(j<len){
            freq[s[j]-'a']++;
            if(j-i==win-1){
                if(freq==freq2) ans.push_back(i);
                freq[s[i]-'a']--;
                i++; 
            }
            j++;
        }
        return ans;
    }
};