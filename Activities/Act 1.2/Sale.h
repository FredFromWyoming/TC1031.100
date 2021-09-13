#include "Buyer.h"
#include <string>
using namespace std;

class Sale {

protected:
Buyer buyer;
int value;

public:
    Sale (Buyer x, int y) {
        buyer = x;
        value = y;
    }

};