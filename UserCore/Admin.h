#ifndef CPP_STACKOVERFLOW_ADMIN_H
#define CPP_STACKOVERFLOW_ADMIN_H

#include "AbstractUser.h"

class Admin : public AbstractUser {
public:
    Admin() {
        this->DisplayName = "admin";
        this->Email = "admin@admin.com";
        this->Password = "admin";
    }

    bool deleteUser();
};


#endif //CPP_STACKOVERFLOW_ADMIN_H
