#include "Password.h"
#include <ctime>

time_t Password::getTime() { return this->lastTime; }

string Password::getValue() { return this->value; }

void Password::setTime() { this->lastTime = time(0); }

void Password::setValue(string value) { this->value = value; }