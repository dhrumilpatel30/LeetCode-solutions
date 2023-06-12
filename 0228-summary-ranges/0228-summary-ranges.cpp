class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if(0 == nums.size())return ans;
        int a = nums[0];
        int b = nums[0];
        for(int i=1;i<nums.size();i++){

            if(nums[i] == a+1){
                a++;
            }
            else{
                string ans_temp;
                if(a == b){
                    ans_temp = to_string(a);
                }
                else{
                    ans_temp = to_string(b) + "->" + to_string(a); 
                }
                ans.push_back(ans_temp);
                a = b = nums[i];
            }
        }
        string ans_temp;
                if(a == b){
                    ans_temp = to_string(a);
                }
                else{
                    ans_temp = to_string(b) + "->" + to_string(a); 
                }
        ans.push_back(ans_temp);

        return ans;
    }
};