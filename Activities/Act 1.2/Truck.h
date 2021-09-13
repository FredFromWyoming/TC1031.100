#include "Vehicle.h"
#include <string>
using namespace std;

class Car : protected Vehicle {
    protected:
    string driveTrain;

    void setDrive(string);

    public:
    string getDrive();
    
};