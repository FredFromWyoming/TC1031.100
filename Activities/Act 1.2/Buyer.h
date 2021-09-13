#include <string>
using namespace std;

class Buyer {
    private:
    string name;
    string lastName;
    int FedID;

    void setName();
    void setLastName();
    void setID();

    public:
    string getName();
    string getLastName();
    int getID();

};