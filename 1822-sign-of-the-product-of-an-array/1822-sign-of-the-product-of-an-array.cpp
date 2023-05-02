class Solution {
public:
    int arraySign(vector<int>& nums) {
        int sign=1;
        for(int n:nums){
            if(0==n)sign=0;
            else sign*=n/abs(n);
        }
        return sign;
    }
};