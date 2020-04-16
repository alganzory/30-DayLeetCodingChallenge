class Solution {
public:
    bool checkValidString(string s) {
        
if (s.length()==0) return true; //weird test case
// if the start or end is not correct, no need to continue
if (s[0] == ')' or s[s.length()-1] == '(') return false;

// if we consider asteriks as ( and we get a negative unbalance,
// there is no way we can balance it, so false
 int left = 0;
    for (int i=0; i<s.length(); i++) {
      if (s[i] == ')')
        left--;        
      else
        left++;
      
      if (left<0) return false;
    }
    
    // we have two possibilities, left = 0 , then we managed to balance
    // or left > 0, then we need to check for an imbalance for )
    if (left == 0) return true;

    // if we consider asteriks as ) and we get a negative unbalance,
// there is no way we can balance it, so false       
    int right = 0;
    for (int i=s.length()-1; i>=0; i--) {
      if (s[i] == '(' )
        right--;
      else
        right++;
      
      if (right<0) return false;  
    }

    // if we reached this point, we could very well balance.
  
    return true;
    }
};
