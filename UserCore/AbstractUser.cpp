#include "AbstractUser.h"
#include <string.h>

bool AbstractUser::validatePassword(Password password) {
    if (password.getValue() == this->password.getValue())
        return 1;
    return 0;
}

void AbstractUser::setDisplayName(string displayName) {
    this->displayName = displayName;
}

void AbstractUser::setEmail(string email) {
    this->email = email;
}

string AbstractUser::getDisplayName() { return this->displayName; }

string AbstractUser::getEmail() { return this->email; }