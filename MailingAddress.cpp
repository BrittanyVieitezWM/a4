
#include "MailingAddress.h"

int curaddr;
MailingAddress (string s, string c, string a, int z){
street=s;
city=c;
state=a;
zipcode=z;
}

public static equals(addr){
    //if address is current address, return true
    //else return false
    if (addr== curaddr){
        return true;
    }
    else{
        return false;
    }
}

public string toString(){
    //return a string of current address
    return MailingAddress;

}