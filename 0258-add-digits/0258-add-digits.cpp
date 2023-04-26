class Solution {
public:
    int countDigitsSum(int a){
        int sum=0;
        while(a>0){
            sum+=a%10;
            a/=10;
        }
        return sum;
    }
    int addDigits(int num) {
        int local_num =num;
        while(true){
            local_num = countDigitsSum(local_num);
            if(local_num < 10)return local_num;
        }
        return local_num;
        
    }
};