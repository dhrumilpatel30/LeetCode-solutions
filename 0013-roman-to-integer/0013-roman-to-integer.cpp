class Solution {
public:
    int romanToInt(string s) {
        map<char,int> value;
        value['I'] = 1;
        value['V'] = 5;
        value['X'] = 10;
        value['L'] = 50;
        value['C'] = 100;
        value['D'] = 500;
        value['M'] = 1000;
        int ans= value[s[0]];
        char last = s[0];
        for(int i = 1;i<s.size();i++){
            ans += value[s[i]];
            if('I' == last)
                if('V' == s[i] || 'X' == s[i])ans-=2;
            if('X' == last)
                if('L' == s[i] || 'C' == s[i])ans-=20;
            if('C' == last)
                if('D' == s[i] || 'M' == s[i])ans-=200;
            last = s[i];
        }
        return ans;
    }
};