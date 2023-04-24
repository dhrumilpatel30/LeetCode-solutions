class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int i=stones.size();
        int n=stones.size();
        vector<int> myruff = stones;
        for(;i>1;i--){
            sort(myruff.begin(),myruff.end());
            if(myruff[n-1] == myruff[n-2]){
                myruff[n-1]=myruff[n-2]=0;
                i--;
            }
            else{
                myruff[n-1]=myruff[n-1]-myruff[n-2];
                myruff[n-2]=0;
            }
        }
        sort(myruff.begin(),myruff.end());
        return myruff[n-1];
    }
};