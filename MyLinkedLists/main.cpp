#include <iostream>
#include "list.h"
int main()
{
    list<int> node1(1);
    list<int> node2(2);
    list<int> node3(3);

    std::cout<<"------------------"<<std::endl;
    // Appending
    node1.Append(node2);
    std::cout<<"------------------"<<std::endl;
    node2.Append(node3);
    std::cout<<"------------------"<<std::endl;
    
    std::cout<<node1.FindLengthIter()<<std::endl;
    std::cout<<"------------------"<<std::endl;
    node1.ShowList();
    std::cout<<"------------------"<<std::endl;
}