//
// Created by Nima iji on 10/23/2018 AD.
//

#ifndef CPP_STACKOVERFLOW_EMPLOYER_H
#define CPP_STACKOVERFLOW_EMPLOYER_H

#include "AbstractUser.h"
class Employer: public AbstractUser {
public:
    Employer(string displayName,string email,string password){
        this->DisplayName = displayName;
        this->Email = email;
        this->Password = password;
    }
};


#endif //CPP_STACKOVERFLOW_EMPLOYER_H
