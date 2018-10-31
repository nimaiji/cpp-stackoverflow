//
// Created by Nima iji on 10/23/2018 AD.
//

#ifndef CPP_STACKOVERFLOW_ABSTRACTUSER_H
#define CPP_STACKOVERFLOW_ABSTRACTUSER_H

#include <string.h>
#include <iostream>
#include "Password.h"
class AbstractUser {
public:
    string displayName, email;

    bool validatePassword(string password);
    virtual bool sendPost()=0;
    bool editPost();
    bool sendComment();
    bool editComment();

    void setDisplayName(string displayName);
    void setEmail(string email);
    string getDisplayName();
    string getEmail();

protected:
    Password password;
};


#endif //CPP_STACKOVERFLOW_ABSTRACTUSER_H
