public:
    string stringShift(string s, vector>& shift) {
		// keeping the original size of the string
        int sz = s.size();
		 // duplicating the string , abc -> abc+abc = abcabc
        s+= s; 
        string ret;
		// mv is going to hold the total value of the movement and p1 is an index/pointer
        int mv = 0, p1 =0; 
		// calculating all movement required
        for (auto x: shift) {  
          if (x[0]) mv -= x[1];
          else mv += x[1];
        }
		// pointer moves according to movement and uses modulus to not go out of 
		// boundaries and to deal with negative values
        p1 += (mv%sz + sz) % sz; 
		// return a substring from the pointer until the size of the original
        ret = s.substr(p1, sz); 
        return ret;
    }
};
