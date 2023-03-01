class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> num = nums;
        sort(num.begin(),num.end());
        return num;
    }
};