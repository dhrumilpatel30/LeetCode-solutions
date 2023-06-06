class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        vector<int> rough_arr = arr;

        sort(rough_arr.begin(),rough_arr.end());
        int d = rough_arr[1]-rough_arr[0];
        for(int i=2;i<rough_arr.size();i++){
            if(d != rough_arr[i]-rough_arr[i-1])return false;
        }
        return true;
    }
};