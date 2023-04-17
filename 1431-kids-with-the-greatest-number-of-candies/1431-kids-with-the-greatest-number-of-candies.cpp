class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> array;
        int max=0;
        for(int a:candies)if(max<a)max=a;
        
        for(int a:candies)array.push_back(max<=extraCandies+a);
        
        return array;
    }
};