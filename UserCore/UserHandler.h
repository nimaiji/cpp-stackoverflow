//
// Created by Nima iji on 10/24/2018 AD.
//

#ifndef CPP_STACKOVERFLOW_USERHANDLER_H
#define CPP_STACKOVERFLOW_USERHANDLER_H

#include "User.h"
#include "Admin.h"
#include "Employer.h"

class UserHandler {
public:
    bool signIn(Employer employer);
    bool signIn(User user);
    bool signIn(Admin admin);
    bool signOut(Employer employer);
    bool signOut(User user);
    bool signOut(Admin admin);
    bool editInformation(string displayName,string email,string password);
};


#endif //CPP_STACKOVERFLOW_USERHANDLER_H
