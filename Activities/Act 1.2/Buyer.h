#pragma once

#include <string>
#include <vector>
#include "Vehicle.h"

using namespace std;

class Buyer {
    public:
    string name;
    string lastName;
    int FedID;
    vector<Vehicle> ownedVehicles;

    void setName(string);
    void setLastName(string);
    void setID(int);

    public:
    Buyer(string name,
    string lastName,
    int FedID);

    Buyer();

    string getName();
    string getLastName();
    int getID();

};