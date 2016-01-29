//
//  Node.cpp
//  cppBinaryTree
//
//  Created by Jinwook Lee on 2016-01-27.
//  Copyright (c) 2016 Jinwook Lee. All rights reserved.
//

#include "Node.h"



Node::Node():name("Default"), left(nullptr), right(nullptr){
}

Node::Node(std::string& nodeName):name(nodeName), left(nullptr), right(nullptr){
}

std::ostream& operator<<(std::ostream& os, const Node& node){
    return os << "Name: " << node.name;
}