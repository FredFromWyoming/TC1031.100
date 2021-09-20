#include <iostream>
#include "Buyer.h"
#include "Groups.h"
#include "Vehicle.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int printMenu(){
    cout << "Menu prinicpal" << endl << endl
    
    << "1. Nueva venta" << endl
    << "2. Lista de ventas" << endl
    << "3. Lista de vehiculos por persona" << endl
    << "4. Filtrar por ano y km" << endl
    << "5. Salir" << endl
    
    << "> ";

    int input;

    cin >> input;

    return input;
}

int main(int argc, char const *argv[])
{
    Groups * allSales = new Groups();

    while (true){
        switch (printMenu())
        {
        case 1: // Crear una nueva venta
            allSales->addSell();
            break;
        case 2:
            allSales->getSellsList();
            break;
        case 3:
            int INE;
            cin >> INE;

            cout << "Porfavor proporciona el INE del usuario" << endl
            
            << "> ";
            allSales->getVehiclesForPerson(INE);
            break;
        case 4:
        {
            string year;

            cout << "Porfavor proporciona el año de busqueda" << endl
            
            << "> ";
            cin >> year;

            int km;

            cout << "Porfavor proporciona el kilometraje de busqueda" << endl
            
            << "> ";
            cin >> km;
            allSales->getFilter(year, km);
            break;
        }
        
        default:
            return 0;
        }
    }

    delete &allSales;
    return 0;
}
