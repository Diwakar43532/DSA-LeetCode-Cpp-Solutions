class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int m = arr.size(), n = arr[0].size();
        int i = 0;
        int col = n-1;
        while(i<m && col>=0){
            if(arr[i][col]==target){
                return true;
            }
            else if(arr[i][col]>target){
                col--;
            }
            else{
                i++;
            }
        }
        return false;
    }
       

};