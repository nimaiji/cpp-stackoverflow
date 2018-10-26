//
// Created by Nima iji on 10/26/2018 AD.
//

#include "Exeption.h"
void Exeption::setMessage(string message) { this->message = message; }

void Exeption::setCode(int code) { this->code = code; }

string Exeption::getMessage() { return this->message; }

int Exeption::getCode() { return this->code; }