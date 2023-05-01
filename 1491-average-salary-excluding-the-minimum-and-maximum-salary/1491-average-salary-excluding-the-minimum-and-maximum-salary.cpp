class Solution {
public:
    double average(vector<int>& salary) {
        int avg=0;
        int max=salary[0],min=salary[0];
        for(int s:salary){
            if(max<s){
                max=s;
            }
            else if(min>s){
                min=s;
            }
            avg+=s;
        }
        return (avg-(double)(max+min))/(salary.size()-2);
    }
};