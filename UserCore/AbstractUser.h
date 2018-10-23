//
// Created by Nima iji on 10/23/2018 AD.
//

#ifndef CPP_STACKOVERFLOW_ABSTRACTUSER_H
#define CPP_STACKOVERFLOW_ABSTRACTUSER_H

#include <string.h>
#include <iostream>
class AbstractUser {
public:
    string DisplayName, Email;

    bool validatePassword(string password);

    void setDisplayName(string displayName);
    void setEmail(string email);
    string getDisplayName();
    string getEmail();

protected:
    string Password;
};


#endif //CPP_STACKOVERFLOW_ABSTRACTUSER_H
