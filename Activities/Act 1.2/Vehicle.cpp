#include "Vehicle.h"
#include <string>
using namespace std;

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
