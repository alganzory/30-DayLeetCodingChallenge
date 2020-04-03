
class Solution {
    
    int getSquareSum (int n) {
        int sum = 0;
        while (n) {
            int digit = n%10;
            n /= 10;
            sum += digit *digit;
        }
        return sum;
    }
    
public:
    
    bool isHappy(int n) {
        unordered_set <int> m;
        
        while (true) {
            if (n == 1){ 
                return true;
            }
            
            n = getSquareSum(n);
            
            if (m.count (n) == 1) {
                return false;
            }
            m.insert(n);
        }
        
        
    }
};
