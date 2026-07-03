class Solution {
public:
    int maxArea(vector<int>& height) {  // Two Pointer Approach {TC~ O(n) -Linear}
        int maxwater = 0; //Ans
        int lp = 0;
        int rp = height.size()-1;

        while(lp<rp){
            int w = rp - lp;
            int ht = min(height[lp],height[rp]);

            int currwater = w * ht;

            maxwater = max(currwater,maxwater);

            height[lp]<height[rp]?lp++:rp--;


        }

        

        return maxwater;

        
    }
};