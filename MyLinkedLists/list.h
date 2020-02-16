#pragma once
template <typename T>
class list
{
private:
    T data;
    list<T> *next;

public:
    // Initializes the node
    explicit list(T d, list<T> *next_node = nullptr);

    // Destryos the object and writes out its values
    ~list();

    // Methods

    // Print all elements of a list
    void ShowList(); // works

    // Insert a given node into the list (with recursion)
    void InsertAsNext(list<T> &next_node); // works

    // Append to the end of a list
    void Append(list<T> &to_node); // works

    // Find Length of a Linked List (Iterative)
    unsigned int FindLengthIter(); // works

    // Find Length of a Linked List (Recursive)
    unsigned int FindLengthRec();

    // Search an element in a Linked List Iterative
    bool SearchIter(T key);

    // Search an element in a Linked List Recursive
    bool SearchRec(T key);
};
#include "list.cpp"