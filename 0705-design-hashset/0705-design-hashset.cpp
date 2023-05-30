class MyHashSet {
public:
    vector<bool> hash;
    MyHashSet() {
        vector<bool> rough(10000000,false);
        hash = rough;
    }
    
    void add(int key) {
        hash[key] = true;
    }
    
    void remove(int key) {
        hash[key] = false;
    }
    
    bool contains(int key) {
        return hash[key];
    }
};