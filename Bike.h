#include "Vehicle.h"
#include <string>

class Bike : protected Vehicle {
    protected:
    int engineDisplacement;

    void setDisplacement(int);

    public:
    int getDisplacement();
};

