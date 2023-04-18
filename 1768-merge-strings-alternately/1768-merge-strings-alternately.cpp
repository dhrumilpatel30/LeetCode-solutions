class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        for(int i=0,j=0;;){
            if(i<word1.length()){
                ans.push_back(word1[i]);
                i++;
            }
            if(j<word2.length()){
                ans.push_back(word2[j]);
                j++;
            }
            else if(i>=word1.length())break;
        }
        return ans;
    }
};