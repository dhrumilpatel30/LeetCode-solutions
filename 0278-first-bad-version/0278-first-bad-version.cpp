// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       long  mid,e=n,s=1;
       int i;
       mid= (e+s-1)/2;
       if(isBadVersion(mid)) e=mid-1;
       else if(!isBadVersion(mid)) s=mid+1;
       for(i=s;i<=e;i++){
           if(isBadVersion(i)) break;
       }
       return i;
    }
};