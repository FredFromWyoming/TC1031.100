#pragma once

#include <string>

using namespace std;

class Vehicle {
    public:

    string type;
    string make;
    string model;
    int mileage;
    int vin;

    void setMake(string);
    void setModel(string);
    void setMileage(int);
    void setVin(int);

    public:

    Vehicle(string type,
    string make,
    string model,
    int mileage,
    int vin);

    string getMake();
    string getModel();
    int getMileage();
    int getVin();
};
