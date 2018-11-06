#ifndef CPP_STACKOVERFLOW_EXPORTABLE_H
#define CPP_STACKOVERFLOW_EXPORTABLE_H


class Exportable {
protected:
    pure virtual export() = 0;

    virtual import() = 0;

public:
    Exportable() { }
};


#endif //CPP_STACKOVERFLOW_EXPORTABLE_H
