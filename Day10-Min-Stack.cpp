class MinStack {
public:

    deque <int> d;          // the stack container
    vector<int> m;         //a vector to store the minimum values along the way
 
    MinStack() { 
      m.push_back(INT_MAX);
    }

    void push(int x) {
        d.push_back(x);
        m.push_back( min (m.back(), x) );
    }
    
    void pop() {
        d.pop_back();
        m.pop_back();
    }
    
    int top() {
        return d.back();
    }
  
     int getMin() {
         return m.back();
    }
};
