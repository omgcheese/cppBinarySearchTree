//
//  NodeList.h
//  cppBinaryTree
//
//  Created by Jinwook Lee on 2016-01-27.
//  Copyright (c) 2016 Jinwook Lee. All rights reserved.
//

#ifndef __cppBinaryTree__NodeList__
#define __cppBinaryTree__NodeList__


#include "Node.h"

class NodeList{
public:
    NodeList();
    ~NodeList();
    
    void addNode(std::string&);
    void adding(Node* ptr, Node* newNode);
    void printNode(Node* head);
    void clear(Node* ptr);
    
private:
    Node* head;
};

#endif /* defined(__cppBinaryTree__NodeList__) */
