class MedianFinder {
public:
  vector<int> v;

  priority_queue<int> pq1;
  priority_queue<int,vector<int>,greater<int>> pq2;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
       v.push_back(num);
       if(pq1.size()==0 && pq2.size()==0){
         pq1.push(num);
       }
       else{
        if(num<=pq1.top()){
            pq1.push(num);
        }
        else{
            pq2.push(num);
        }
        
        if((pq1.size()-pq2.size())>1 || pq2.size()-pq1.size()>1){
            if(pq1.size()>pq2.size()){
                pq2.push(pq1.top());
                pq1.pop();
            }
            else{
                  pq1.push(pq2.top());
                  pq2.pop();
            }
        }
       }
    }
    
    double findMedian() {
        if(pq1.size()==pq2.size()) return (pq1.top()+pq2.top())/2.0;
        return pq1.size()>pq2.size() ? pq1.top() : pq2.top();
        
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */