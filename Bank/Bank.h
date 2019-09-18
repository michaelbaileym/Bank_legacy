//
//  Bank.h
//  Bank
//
//  Created by Michael Bailey on 9/17/19.
//Copyright © 2019 Michael Bailey. All rights reserved.
//

#ifndef Bank_h
#define Bank_h

#include <iostream>
#include "Customer.h"

using namespace std;

class Bank {
private:
    Customer customer;
public:
    //constructors
    Bank();
    //deconstructors
    virtual ~Bank();
    
};
#endif /* Bank_h */
