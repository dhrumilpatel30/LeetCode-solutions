class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i=0;
        vector<int> ans;
        for(;i<n;i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[n+i]);
        }
        return ans;
    }
};