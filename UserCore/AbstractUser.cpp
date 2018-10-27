#include "AbstractUser.h"
#include <string.h>

bool AbstractUser::validatePassword(string password) {
    if (password == this->password)
        return 1;
    return 0;
}

void AbstractUser::setDisplayName(string displayName) {
    this->DisplayName = displayName;
}

void AbstractUser::setEmail(string email) {
    this->Email = email;
}

string AbstractUser::getDisplayName() { return this->DisplayName; }

string AbstractUser::getEmail() { return this->Email; }