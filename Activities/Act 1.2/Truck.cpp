#include "Truck.h"
#include <string>
using namespace std;

void Truck::setDrive(string x){
    driveTrain = x;
}

string Truck::getDrive(){
    return driveTrain;
}

