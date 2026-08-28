class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();
        //Three Diff. cases Firstly handle this one..
        if(n==1) return arr[0];
        if(arr[0] != arr[1]) return arr[0];
        if(arr[n-1] != arr[n-2]) return arr[n-1];

        int lo = 0, hi = n-1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            // Carefully Divides array into three arrays..
            if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]) return arr[mid];
            int f=mid, s=mid; // f ~ First mid  ; s ~ Second mid; 
            if(arr[mid]==arr[mid-1]) f = mid-1;
            else s = mid+1;
            // Using Binary concept with Even ~ Odd length array..
            int leftLenght = f-lo; 
            if (leftLenght%2 == 1) hi = f-1;
            else lo = s+1;
        }
        return 83;
        
        
    }
};