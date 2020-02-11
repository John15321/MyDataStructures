#include <iostream>
#include "list.h"


// Initializes the node and assigns nullptr to next pointer if no args given
// Then prints out variable values
template<typename T>
list<T>::list(T d, list<T>* next_node)
{
    this->data = d;
    this->next = next_node;
    std::cout<<"Constructed with: " << std::endl;
    std::cout<<"Data: "<<this->data<<std::endl;
    std::cout<<"Next: "<<this->next<<std::endl;
}

// Destryos the object and writes out its values
template<typename T>
list<T>::~list()
{
    std::cout<<"Destroyed with: "<<std::endl;
    std::cout<<"Data: "<<this->data<<std::endl;
    std::cout<<"Next: "<<this->next<<std::endl;
}

// Prints out all next nodes along with their data and their count
template<typename T>
void list<T>::ShowList()
{
    static unsigned int count;
    std::cout << "Data: "     << this->data << std::endl;
    std::cout << "Next one: " << this->next << std::endl;
    if(this->next == nullptr)
    {
        count = 1;
    }
    else
    {
        this->next->ShowList();
        count++;
        std::cout << "Node no.: " << count << std::endl;
    }
}


// Insert a given node into the list (with recursion)
template<typename T>
void list<T>::InsertAsNext(list<T>& next_node)
{
    if(this->next == nullptr)
    {
        this->next = &next_node;
    }
    else
    {
        /* If the node that is being added also contains
            nodes (which means that is a list on its own),
            the last one of the alien list will be pointing
            to the second in relative order node of the original list */
        next_node.next->Append(*(this->next));
        this->next = &next_node;
    }
}

// Append to the end of a list
template<typename T>
void list<T>::Append(list<T>& to_node)
{
    this->InsertAsNext(to_node);
}

// Find Length of a Linked List (Iterative)
template<typename T>
unsigned int list<T>::FindLengthIter()
{
    unsigned int count=1;
    list<T>* next_one;
    next_one = this->next;
    while(next_one!=nullptr)
    {
        count++;
        next_one = next_one->next;
    }
    return count;
}


// Find Length of a Linked List (Recursive)
template<typename T>
unsigned int list<T>::FindLengthRec()
{
    static unsigned int count;
    if(this->next == nullptr)
    {
        count = 1;
    }
    else
    {
        this->next->FindLengthRec();
        count++;
        // std::cout<<"."<<count<<std::endl;
    }
    return count;
}