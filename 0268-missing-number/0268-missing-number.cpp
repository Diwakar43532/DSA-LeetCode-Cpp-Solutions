class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        for (int i=0 ; i<=n ;i++){
            bool found = false;
            for (int ele : nums){
                if (ele==i){
                    found = true;
                    break;
                }
            }
            if( found==false) return i;
        }
        return 783;
        
    }
    
};