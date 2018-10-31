#ifndef CPP_STACKOVERFLOW_PASSWORD_H
#define CPP_STACKOVERFLOW_PASSWORD_H

#include <time.h>

class Password {
    string value;
    time_t lastTime;
public:
    void setValue(string value);

    void setTime(time_t time);

    string getValue();

    time_t getTime();
};


#endif //CPP_STACKOVERFLOW_PASSWORD_H
