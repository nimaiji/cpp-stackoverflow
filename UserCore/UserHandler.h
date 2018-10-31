#ifndef CPP_STACKOVERFLOW_USERHANDLER_H
#define CPP_STACKOVERFLOW_USERHANDLER_H

#include "User.h"
#include "Admin.h"
#include "Employer.h"

enum userState {
    IN, OUT, ADMIN
};

class UserHandler {
    UserState state;
    AbstractUser *me;
public:
    UserHandler(AbstractUser user) : me(user) {
        state = OUT;
    }

    bool signIn(AbstractUser user);

    bool signOut(AbstractUser user);

    void changeEmail(string email);

    void changePassword(Password password);
};


#endif //CPP_STACKOVERFLOW_USERHANDLER_H
