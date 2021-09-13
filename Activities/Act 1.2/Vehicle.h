#include <string>
using namespace std;

class Vehicle {
    protected:

    string make;
    string model;
    int mileage;
    int vin;

    void setMake(string);
    void setModel(string);
    void setMileage(int);
    void setVin(int);

    public:

    string getMake();
    string getModel();
    int getMileage();
    int getVin();



};
