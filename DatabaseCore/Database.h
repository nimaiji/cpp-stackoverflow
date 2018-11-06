#ifndef CPP_STACKOVERFLOW_DATABASE_H
#define CPP_STACKOVERFLOW_DATABASE_H

#include <vector>
#include "data.h"

template<class T>
class Database{
protected:
    string name,path;
    File dFile;
    vector<T> v;
public:
    Database(string name):name(name){}
    Database(string path):path(path){}
    void insertIndex(T t);
    void insertIndex(int t);
    void dropIndex(T t);
    void dropIndex(int t);
    void updateIndex(T t,int t);
    void join(Database database);
    void join(string path);
};


#endif //CPP_STACKOVERFLOW_DATABASE_H
