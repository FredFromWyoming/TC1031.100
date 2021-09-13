#include "Vehicle.h"
#include <string>

using namespace std;

Vehicle::Vehicle(string type, string make, string model, int mileage, int vin){
    Vehicle::type = type;
    Vehicle::make = make;
    Vehicle::model = model;
    Vehicle::mileage = mileage;
    Vehicle::vin = vin;
}

void Vehicle::setMake(string x){
    make = x;
}

void Vehicle::setModel(string x){
    model = x;
}

void Vehicle::setMileage(int x){
    mileage = x;
}

void Vehicle::setVin(int x){
    vin = x;
}



string Vehicle::getMake(){
    return make;
}

string Vehicle::getModel(){
    return model;
}

int Vehicle::getMileage(){
    return mileage;
}

int Vehicle::getVin(){
    return vin;
}
