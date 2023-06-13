class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,bool> exists;
        for(int num:nums){
            if(NULL != exists[num])return true;
            exists[num] = true;
        }
        return false;
    }
};