#pragma once

#include <string>
#include <vector>
#include "Buyer.h"
#include "Vehicle.h"

using namespace std;

class Groups{
    public:
    vector<Buyer> people = vector<Buyer>();

    Groups();

    void addToPerson(Buyer * person);

    void addSell();
    void getSellsList();
    void getVehiclesForPerson(int INE);
    void getFilter(string year, int km);
};