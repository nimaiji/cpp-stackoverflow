#ifndef CPP_STACKOVERFLOW_XVECTOR_H
#define CPP_STACKOVERFLOW_XVECTOR_H

#include <vector>
#include "Exportable.h"

template <T>
class xVector:public std::vector<T>,public Exportable {

    void export();
    void import();

};


#endif //CPP_STACKOVERFLOW_XVECTOR_H
