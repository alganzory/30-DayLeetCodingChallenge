class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        if (nums.empty()) return -1;
        int l = 0;
        int r= nums.size() -1;

        int ans = -1;
        int mid;
        while ( r >= l ) {
            
            mid = l + ((r-l) /2);
            
            if (nums [mid] > nums [nums.size() -1] ) 
                l = mid +1;

            else{  
                ans = mid ;  
                r= mid -1;
            }

        } 
      
        
        if (ans == 0) {
        l =0; r= nums.size() -1;
        ans = -1;
         while ( r >= l) {
           mid = l +(r-l) /2;
           if ( target == nums [mid]) return mid;
           else if ( target > nums [mid]  ){
                 l = mid +1;
           }
           else r = mid -1;
         
        } 
        return ans;
        } 


        else if (target < nums [0]) {
          l=ans; r =nums.size() -1 ; 
          while ( r >= l) {
            mid = l +(r-l)/2;
            if (nums [mid] < target ){
            l = mid +1; }
            else if (nums [mid] == target)return mid; 
            else r = mid -1;
         
          }   
            return -1;
        }

        else {
          l=0; r= ans; 
           while ( r >= l) {
            mid = l +(r-l)/2;
             if (nums [mid] < target ){
              l = mid +1; }
              else if (nums [mid] == target)return mid; 
              else r = mid -1;
         
          }   return -1; 
          
        }
}
};
