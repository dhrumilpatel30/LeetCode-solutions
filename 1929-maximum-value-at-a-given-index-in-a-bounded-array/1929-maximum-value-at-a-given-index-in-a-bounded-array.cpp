class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
        long long int m = 1,mx = maxSum,res;
        while(m <= mx)
        {
            long long int mid = (mx-m)/2+m;
            long long int diff = mid-index;
            long long int l = mid-(n-index-1);
            long long int k = 0;
            if(diff<=0)
            {
                k += -diff+1;
                k += (mid*(mid+1))/2;
            }else
            {
                k += ((index+1)*(mid+diff))/2;
            }
            if(l<=0)
            {
                k += -l+1;
                k += (mid*(mid-1))/2;
            }else
            {
                k += ((n-index-1)*(mid-1+l))/2;
            }
            if(k>maxSum){
                mx = mid-1;
            }else{
                res = mid;
                m = mid+1;
            }
        }
        return res;
    }
};