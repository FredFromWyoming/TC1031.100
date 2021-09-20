#include "Groups.h"
#include <string>
#include <vector>
#include "Buyer.h"
#include <iostream>

using namespace std;

Groups::Groups(){
    Groups::people = vector<Buyer>();
}

/// @brief Adds sell to person
/// 
/// @param person 
void Groups::addToPerson(Buyer * person){
    string type;
    
    cout << "Cual tipo de vehiulo gustas agregar?\n> ";

    cin >> type;

    string model;

    cout << "Que modelo de vehiulo gustas agregar?\n> ";
    
    cin >> model;

    string make;

    cout << "Que fecha de vehiulo gustas agregar?\n> ";
    
    cin >> make;

    int mileage;

    cout << "Que millaje de vehiulo gustas agregar?\n> ";
    
    cin >> mileage;

    int vin;

    cout << "Que placas de vehiulo gustas agregar?\n> ";
    
    cin >> vin;

    person->ownedVehicles.push_back(Vehicle(type, make, model, mileage, vin));

}

/// @brief Adds a new sell to person, creates new person if name does not exist
/// 
void Groups::addSell(){
    string name;

    cout << "Cual es el nombre de la persona que buscas?\n> ";

    cin >> name;

    Buyer person;

    for (int i = 0; i < Groups::people.size(); i++)
    {
        if (Groups::people[i].name == name)
        {
            person = Groups::people[i];

            addToPerson(&person);
            return;
        }
        
    }

    string Apellido;

    cout << "Cual es el apellido de la persona nueva?\n> ";

    cin >> Apellido;

    int INE;

    cout << "Cual es el INE de la persona nueva?\n> ";

    cin >> INE;

    person = Buyer(name, Apellido, INE);

    Groups::people.push_back(person);

    addToPerson(&person);
}

/// @brief Takes in the entire list of sells, with owner
/// 
void Groups::getSellsList(){
    cout << "Coches vendidos" << endl << endl;
    for (int i = 0; i < Groups::people.size(); i++)
    {
        cout << "Comprante: "<< Groups::people[i].name << " " << Groups::people[i].lastName << endl;
        for (int x = 0; x < Groups::people[i].ownedVehicles.size(); x++)
        {
            cout << "Tipo: " << Groups::people[i].ownedVehicles[x].type << endl
            << "Modelo: " << Groups::people[i].ownedVehicles[x].model << endl
            << "Millas: " << Groups::people[i].ownedVehicles[x].mileage << endl
            << "Placas: " << Groups::people[i].ownedVehicles[x].vin << endl
            << "Hecho en: " << Groups::people[i].ownedVehicles[x].make << endl
            <<endl;
        }
        
    }
    
}

/// @brief Searches for person's veihicle, based on it's ine
/// 
/// @param INE 
void Groups::getVehiclesForPerson(int INE){
    for (int i = 0; i < people.size(); i++)
    {
        if (people[i].FedID == INE)
        {
            cout << "Comprante: "<< Groups::people[i].name << " " << Groups::people[i].lastName << endl;
            for (int x = 0; x < Groups::people[i].ownedVehicles.size(); x++)
            {
                cout << "Tipo: " << Groups::people[i].ownedVehicles[x].type << endl
                << "Modelo: " << Groups::people[i].ownedVehicles[x].model << endl
                << "Millas: " << Groups::people[i].ownedVehicles[x].mileage << endl
                << "Placas: " << Groups::people[i].ownedVehicles[x].vin << endl
                << "Hecho en: " << Groups::people[i].ownedVehicles[x].make << endl
                <<endl;
            }
            return;
        }
    }
    
    cout << "No hay persona con esos datos." << endl;
}


void Groups::getFilter(string year, int km){
    cout << "Buscar vehiculos con parametros dados"<< endl;

    vector<Vehicle> searchResults;
    
    for (int i = 0; i < people.size(); i++)
    {
        for (int x = 0; x < Groups::people[i].ownedVehicles.size(); x++)
        {
            if (Groups::people[i].ownedVehicles[x].make == year && Groups::people[i].ownedVehicles[x].mileage > km)
            {
                searchResults.push_back(Groups::people[i].ownedVehicles[x]);
            }
        }
    }

    for (int i = 0; i < searchResults.size(); i++)
    {
        cout << "Tipo: " << searchResults[i].type << endl
        << "Modelo: " << searchResults[i].model << endl
        << "Millas: " << searchResults[i].mileage << endl
        << "Placas: " << searchResults[i].vin << endl
        << "Hecho en: " << searchResults[i].make << endl
        <<endl<<endl;
    }
    
}