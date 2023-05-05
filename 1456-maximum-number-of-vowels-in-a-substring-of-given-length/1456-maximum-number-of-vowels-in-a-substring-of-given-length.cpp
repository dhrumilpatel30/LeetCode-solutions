class Solution {
public:
    bool isVowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c =='u')return true;
        return false;
    }
    int maxVowels(string s, int k) {
        int maxVowel=0;
        for(int i=0;i<k;i++){
            if(isVowel(s[i]))maxVowel++;
        }
        int now=maxVowel;
        for(int i=k;i<s.length();i++){
            if(isVowel(s[i-k])){
                if(!isVowel(s[i])){
                    now--;
                    cout<<"minus";
                }
            }
            else if(isVowel(s[i])){
                now++;
                cout<<"plus";
            }
            maxVowel = max(now,maxVowel);
        }
        return maxVowel;
    }
};