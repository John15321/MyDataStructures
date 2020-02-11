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
    
    std::cout<<"FindLengthIter(): "<<
    node1.FindLengthIter()<<std::endl;
    std::cout<<"------------------"<<std::endl;
    std::cout<<"FindLengthRec(): "<<
    node1.FindLengthRec()<<std::endl;
    std::cout<<"------------------"<<std::endl;
    int key;
    std::cin>>key;  
    std::cout<<"If "<<key<<" inside: "<<
    (node1.SearchIter(key)== 1 ? "True":"False")<<std::endl;
    std::cout<<"------------------"<<std::endl;
    std::cout<<"If "<<key<<" inside: "<<
    (node1.SearchRec(key)== 1 ? "True":"False")<<std::endl;
    std::cout<<"------------------"<<std::endl;
}