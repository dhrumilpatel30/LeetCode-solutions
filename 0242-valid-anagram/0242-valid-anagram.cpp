class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> quantity(26,0);
        if(s.size() != t.size())return false;
        for(int i=0;i<s.size();i++){
            quantity[s[i]-97]++;
        }
        for(int i=0;i<t.size();i++){
            if(0 != quantity[t[i]-97])quantity[t[i]-97]--;
            else return false;
        }
        return true;
    }
};