//
//  Node.h
//  cppBinaryTree
//
//  Created by Jinwook Lee on 2016-01-27.
//  Copyright (c) 2016 Jinwook Lee. All rights reserved.
//

#ifndef __cppBinaryTree__Node__
#define __cppBinaryTree__Node__

#include <iostream>
#include <string>

class Node{
    
    friend class NodeList;
    friend std::ostream& operator<<(std::ostream& os, const Node& node);

public:
    Node();
    Node(std::string&);
    
private:
    Node* left;
    Node* right;
    std::string name;
};

#endif /* defined(__cppBinaryTree__Node__) */
