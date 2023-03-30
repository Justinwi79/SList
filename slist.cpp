#include "slist.h" 
#include <iostream> 
#include <string> 
using namespace std; 


SList::SList() 
{
    head = nullptr; 
    current = nullptr;
    size = 0;
}

SList::~SList()
{

}

bool SList::Empty()
{
    if(head==nullptr && size==0) return true; 
    else return false; 
}

int SList::Size()
{
    return size; 
}

void SList::Insert(const int i, const string ln, const string fn, 
                    const char m, const char g, const char p)
{
    SList_struct * previous;
    SList_struct * temp; 
    current = new SList_struct; 
    current -> id = i; 
    current ->lname = ln;
    current ->fname = fn; 
    current ->mi = m; 
    current ->gender = g; 
    current ->pORc = p; 
    current ->next = nullptr;

    if(Empty())      // Replace the head inside Insert function 
    {
        head = current; 
        size++;
        return; 
    }

    temp = head -> next; 
    previous = head; 
    while(temp != nullptr)
    {
        if(current -> id <=temp ->id) 
        {
            previous -> next = current; 
            current -> next = temp; 
            size++; 
            return; 
        }
        else
        {
            previous = temp; 
            temp = temp -> next; 
        }
    }
}

void SList::List() 
{
    current = head; 
    if(Empty())
    {
        cout << "Empty List " << endl; 
    }
    while(current != nullptr)
    {
        cout << current -> id << ' ' << current->lname << endl; 
        current = current -> next; 
    }
}

SList::SList_struct * SList::Find(const int i)
{
    current = nullptr;
    if(Empty()) return current;
    current = head; 
    while(current != nullptr)
    {
        if(current -> id == i)
        return current; 
        else current = current -> next; 
    }
    return current;
}

bool SList::Delete(const SList_struct * s) 
{
    if(SList_struct * s = nullptr)
    return true; 
    else return false; 
}