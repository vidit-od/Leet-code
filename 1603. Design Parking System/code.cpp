class ParkingSystem {
public:
    int big_cars;
    int medium_cars;
    int small_cars;
    ParkingSystem(int big, int medium, int small) {
        big_cars = big;
        medium_cars = medium;
        small_cars = small;
    }
    
    bool addCar(int carType) {
        if( carType == 1){
            big_cars--;
            if( big_cars < 0){
                return false;
            }
            return true;
        }
        else if( carType == 2){
            medium_cars--;
            if( medium_cars < 0){
                return false;
            }
            return true;
        }
        else{
            small_cars--;
            if( small_cars < 0){
                return false;
            }
            return true;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */