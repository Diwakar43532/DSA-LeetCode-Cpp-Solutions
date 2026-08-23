class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, h = n-1;
        // Search insert Position
        if(nums[0]>target) return 0;
        else if(nums[n-1]<target) return n;
        else{
            while(l<=h){
                int mid = (l+h)/2;
                if(nums[mid]>target) h = mid-1;
                else if (nums[mid]<target) l = mid+1;
                else{  
                    return mid;
                }
            }
        }
        return l;
    
    }
};