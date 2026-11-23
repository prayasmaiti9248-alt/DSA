class ProductOfNumbers {
    vector<int> p;
public:
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        p.push_back(num);
    }
    
    int getProduct(int k) {
        int n=p.size(),m=1;
        for(int i=n-k;i<n;i++){
            m*=p[i];
        }
        return m;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */