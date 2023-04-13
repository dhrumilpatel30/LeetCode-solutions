class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i = 0;
        int j = 0;
        stack<int> s1;
        for(;i<popped.size();i++){
            if(s1.size() > 0){
                if(s1.top() == popped[i]){
                    s1.pop();
                    continue;
                }
            }
            if(j >= pushed.size())return false;
            while(pushed[j] != popped[i]){
                s1.push(pushed[j++]);
                if(j == pushed.size())break;
            }
            j++;
        }
        return true;
    }
};