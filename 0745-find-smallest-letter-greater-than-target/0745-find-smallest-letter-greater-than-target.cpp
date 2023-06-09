class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        bool flag = false;
        for(char letter:letters){
            if(target < letter){
                return letter;
            }
        }
        return letters[0];
    }
};