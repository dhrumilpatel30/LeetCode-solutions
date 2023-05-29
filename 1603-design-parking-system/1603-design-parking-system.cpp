class ParkingSystem {
public:
    vector<int> available;
    ParkingSystem(int big, int medium, int small) {
        available.push_back(big);
        available.push_back(medium);
        available.push_back(small);
    }
    
    bool addCar(int carType) {
        if(0 == available[carType-1])return false;
        available[carType-1]--;
        return true;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */