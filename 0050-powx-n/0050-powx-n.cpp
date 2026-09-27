class Solution {
public:
    double power(double a, long long b) {   //Helper Function..
        if(b==0) return 1;
        double p = power(a,b/2);
        if(b%2==0) return p*p;
        else return p*p*a;
    }

    double myPow(double a ,int b){
        bool flag = (b >= 0); // Flag is True When b is Positive.
        long long b2 = b;
        double ans = power(a ,abs(b2));
        if(flag == false) ans = 1/ans;
        return ans;
    }
};