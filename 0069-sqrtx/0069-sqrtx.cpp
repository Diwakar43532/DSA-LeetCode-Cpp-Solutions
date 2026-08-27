class Solution {
public:
    int mySqrt(int x) {
        long long n=x;
        int lo = 0, hi = n;
        while(lo<=hi){
            long long mid = lo + (hi-lo)/2;
            if(mid*mid > n) hi = mid-1;
            else if(mid*mid < n) lo = mid+1;
            else return mid;
        }
        return hi;
        
    }
};