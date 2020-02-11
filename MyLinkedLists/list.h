#pragma once
template<typename T>
class list
{
private:
    T data;
    list<T>* next;
public:
    // Initializes the node
    explicit list(T d, list<T>* next_node=nullptr);

    // Destryos the object and writes out its values
    ~list();

    // Methods
    
    // Print all elements of a list
    void ShowList();

    // Insert a given node into the list (with recursion)
    void InsertAsNext(list<T>& next_node);

    // Append to the end of a list
    void Append(list<T>& to_node);

    // Find Length of a Linked List Iterative
    unsigned int FindLengthIter();

    // Find Length of a Linked List Recursive


    // Search an element in a Linked List Iterative


    // Search an element in a Linked List Recursive


    // Linked List Deletion (Deleting a given key)


    // Linked List Deletion (Deleting a key at given position)


    // Write a function to delete a Linked List


    // Write a function to get Nth node in a Linked List


    // Nth node from the end of a Linked List


    // Print the middle of a given linked list


    // Write a function that counts the number of times a given int occurs in a Linked List


    // Detect loop in a linked list


    // Find length of loop in linked list


    // Function to check if a singly linked list is palindrome


    // Remove duplicates from a sorted linked list


    // Remove duplicates from an unsorted linked list


    // Swap nodes in a linked list without swapping data


    // Pairwise swap elements of a given linked list


    // Move last element to front of a given Linked List


    // Intersection of two Sorted Linked Lists


    // Intersection point of two Linked Lists.


    // QuickSort on Singly Linked List


    // Segregate even and odd nodes in a Linked List


    // Reverse a linked list


};
#include "list.cpp"