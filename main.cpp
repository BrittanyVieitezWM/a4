#include <iostream>
#include <fstream>
#include "MailingAddress.h"
#include "MAHashTable.h"
using namespace std;

int main(int argc, char** argv) {
    ofstream myfile;
    myfile.open("addresses.txt");
    myfile.close();
    getLoadFactor();
    contains("450 Highland Ave,Salem,MA,1970");
    contains("450 Highland Avenue,Salem,MA,1970");
    return 0;
}
