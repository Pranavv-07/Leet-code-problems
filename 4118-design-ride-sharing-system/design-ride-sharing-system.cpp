class RideSharingSystem {
public:
    queue<int>rider;
    queue<int>driver;
    RideSharingSystem() {
        
    }
    
    void addRider(int riderId) {
        rider.push(riderId);
    }
    
    void addDriver(int driverId) {
        driver.push(driverId);
    }
    
    vector<int> matchDriverWithRider() {
        if(rider.empty() || driver.empty()){
            return {-1,-1};
        }
        int drive = driver.front();
        driver.pop();
        int ride = rider.front();
        rider.pop();
        return {drive,ride};
    }
    
    void cancelRider(int riderId) {
        queue<int>temp;
        while(!rider.empty()){
            if(rider.front()!= riderId){
                temp.push(rider.front());
            }
            rider.pop();
        }
        rider = temp;
    }
};

/**
 * Your RideSharingSystem object will be instantiated and called as such:
 * RideSharingSystem* obj = new RideSharingSystem();
 * obj->addRider(riderId);
 * obj->addDriver(driverId);
 * vector<int> param_3 = obj->matchDriverWithRider();
 * obj->cancelRider(riderId);
 */