class SmallestInfiniteSet {
public:
    int i;
    set<int> all;
    SmallestInfiniteSet() {
        i=1;
    }
    
    int popSmallest() {
        if(all.size() > 0){
            int a = *all.begin();
            all.erase(*all.begin());
            return a;
        }
        return i++;
    }
    
    void addBack(int num) {
        if(i>num){
            all.insert(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */