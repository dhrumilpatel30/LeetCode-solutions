class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=100005,max=0;
        int ans=0;
        for(int price :prices){
            if(min>price){
                min=price;
                max=0;
            }
            if(max<price){
                max=price;
            }
            if(ans < max - min){
                ans = max - min;
            }
        }
        return ans;
    }
};