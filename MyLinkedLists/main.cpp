#include <iostream>
#include "list.h"
int main()
{
    list<int>* p1 = new list<int>(1);
    list<int>* p2 = new list<int>(2);
    list<int>* p3 = new list<int>(3);


    std::cout << "------------------" << std::endl;
    p1->Append(*p2);
    std::cout << "------------------" << std::endl;
    p2->Append(*p3);
    std::cout << "------------------" << std::endl;
    p1->ShowList();
    std::cout << "------------------" << std::endl;

}