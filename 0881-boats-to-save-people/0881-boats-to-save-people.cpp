class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        int boat = 0;
        sort(people.begin(),people.end());
        
        int i=0,j=n-1;
        while(i<=j){
            if(people[i]+people[j]<=limit){  // Both People Take Boat To Minimize Req.
                i++;
                j--;
                
            }
            else{  
               
                
                j--;

            }
            boat++;

        }
        return boat;

        
    }
};