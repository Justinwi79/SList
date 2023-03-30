#ifndef SLIST_H 
#define SLIST_H 
#include <iostream> 
#include <string> 
using namespace std; 

class SList {
public: 
    struct SList_struct 
    {
        int    id; 
        string fname; 
        string lname; 
        char   mi; 
        char   gender;    // m,f,o
        char   pORc;      // p for pie or c for cake
        SList_struct * next; 
    };

    SList();
    ~SList();
    bool Empty();
    int Size();
    void Insert(const int i, const string ln, const string fn, 
                    const char m, const char g, const char p);
    void List();
    SList_struct * Find(const int id);
    bool Delete(const SList_struct * s); 

private: 
    SList_struct * head; 
    SList_struct * current; 
    int size; 

};

#endif