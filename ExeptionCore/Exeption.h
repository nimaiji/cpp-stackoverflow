//
// Created by Nima iji on 10/26/2018 AD.
//

#ifndef CPP_STACKOVERFLOW_EXEPTION_H
#define CPP_STACKOVERFLOW_EXEPTION_H

#include <string.h>

class Exeption {
    string message;
    int code;
public:
    void setMessage(string message);

    void setCode(int code);

    string getMessage();

    int getCode();
};


#endif //CPP_STACKOVERFLOW_EXEPTION_H
