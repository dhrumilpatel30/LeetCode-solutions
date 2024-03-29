class Solution {
public:
    bool isValid(string s) {
       stack<char> stc;
       for(auto i : s) {
           if('(' == i || '{' == i || '[' == i) stc.push(i);
           else {
               if(stc.size() == 0) return false;
               else if(stc.top() == '(' && i == ')') stc.pop();
               else if(stc.top() == '{' && i == '}') stc.pop();
               else if(stc.top() == '[' && i == ']') stc.pop();
               else return false;
           }
       } 
       if(stc.size() == 0) return true;
       return false;
    }
};