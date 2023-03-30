#include <iostream> 
#include <string> 
#include "slist.h" 
using namespace std; 

int main() 
{
    SList mylist; 
    if(mylist.Empty()) cout << "List is empty " << endl; 
    else cout << "List is not empty. " << endl; 
    mylist.Delete(mylist.Find(26)); 
    return 0; 
}