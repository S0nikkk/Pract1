#include <iostream>
#include "Phone.h"
using namespace std;

int main() {
    Phone phone1(1, "Ivanov", "Ivan", "Ivanovich", 123456, 120.5, 45.3);

    cout << "Phone 1 details: " << phone1.toString() << endl;

    return 0;
}
