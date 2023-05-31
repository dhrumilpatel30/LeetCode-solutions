class UndergroundSystem {
public:
    map<int,string> oldStation;
    map<int,int> travelTime;
    map<string,pair<double,int> > distances;
    UndergroundSystem() {
    }
    
    void checkIn(int id, string stationName, int t) {
        oldStation[id] = stationName;
        travelTime[id] = t;
    }
    
    void checkOut(int id, string stationName, int t) {
        // if(NULL == stationId[oldStation[id]]){
        //     stationId[oldStation[id]]=a++;
        // }
        // if(NULL == stationId[stationName]){
        //     stationId[oldStation[id]]=a++;
        // }
        string travel = oldStation[id]+"_to_"+stationName;
        
        
        if(0 != distances.count(travel)){
            cout<<"debug";
            int oldDists = distances[travel].second;
            double oldAvg = distances[travel].first;
            pair<double,int> rough;
            rough.first = (((double)t - travelTime[id]) + oldAvg*oldDists)/(oldDists+1);
            rough.second = oldDists+1;
            cout<<rough.first;
            distances[travel] = rough;
        }
        else{
            distances[travel] = {(double)t - travelTime[id], 1};
        }
    }
    
    double getAverageTime(string startStation, string endStation) {
        return distances[startStation+"_to_"+endStation].first;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */