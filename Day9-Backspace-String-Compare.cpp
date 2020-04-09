class Solution {
public:
  void format (string  &S) {
    int p1 = -1, p2 = 0;
    auto sz = S.size();
    while (p2!= sz ){
      if (S[p2] == '#' and p1 != -1) p1--;
      else if (S[p2] != '#') {
        p1++;
        S[p1] = S[p2];
      }  
      p2++;
    }   
    S.erase(S.begin()+p1+1, S.end());
  }

  bool backspaceCompare(string S, string T) {
    format (S);
    format (T); 
    return (S == T) ;
  }
};
