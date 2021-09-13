#include "Buyer.h"
#include <string>
#include <vector>
#include "Vehicle.h"

using namespace std;

Buyer::Buyer(string name, string lastName, int FedID){
    Buyer::name = name;
    Buyer::lastName = lastName;
    Buyer::FedID = FedID;   
    Buyer::ownedVehicles = vector<Vehicle>();
}

void Buyer::setName(string x){
    name = x;
}

void Buyer::setLastName(string x){
    lastName = x;
}
void Buyer::setID(int x){
    FedID = x;
}

string Buyer::getName(){
    return name;
}
string Buyer::getLastName(){
    return lastName;
}
int Buyer::getID(){
    return FedID;
}