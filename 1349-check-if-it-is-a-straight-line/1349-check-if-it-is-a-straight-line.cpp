class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        double slop;
        if(0 == coordinates[0][1] - coordinates[1][1]){
            for(vector<int> coordinate: coordinates){
                if(0 != coordinate[1] - coordinates[0][1])
                    return false;
            }
        }
        else if(0 == coordinates[0][0] - coordinates[1][0]){
            for(vector<int> coordinate: coordinates){
                if(0 != coordinate[0] - coordinates[0][0])
                    return false;
            }

        }
        else{

            slop = ((double)coordinates[0][1] - coordinates[1][1])/(coordinates[0][0] - coordinates[1][0]);
            for(int i=2;i<coordinates.size();i++){
                if(((float)coordinates[i][1] - coordinates[0][1])/(coordinates[i][0] - coordinates[0][0]) != slop)
                    return false;
            }
        } 
        return true;
    }
};