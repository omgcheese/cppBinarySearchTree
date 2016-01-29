//
//  NodeList.cpp
//  cppBinaryTree
//
//  Created by Jinwook Lee on 2016-01-27.
//  Copyright (c) 2016 Jinwook Lee. All rights reserved.
//

#include "NodeList.h"

NodeList::NodeList(){
    head = nullptr;
    
}

NodeList::~NodeList() {
    clear(head);
    head = nullptr;
}

void NodeList::addNode(std::string& name){
    Node* newNode = new Node(name);
    
    //check if this is the first level
    if(head == nullptr){
        head = newNode;
    }
    else {
        adding(head, newNode);
    }
}

void NodeList::adding(Node* ptr, Node* newNode){
    if(ptr->left == nullptr && ptr->right == nullptr){
        ptr->left = newNode;
    }
    else if (ptr->left != nullptr && ptr->right == nullptr){
        ptr->right = newNode;
    }
    else {
        adding(ptr->left, newNode);
    }
}

void NodeList::clear(Node* ptr){
    if(ptr->left == nullptr && ptr->right == nullptr){
        delete ptr;
    }
    else {
        if(ptr->left != nullptr){
            clear(ptr->left);
        }
        if(ptr->right != nullptr){
            clear(ptr->right);
        }
        delete ptr;
    }
}

void NodeList::printNode(Node* ptr){
    if (ptr == nullptr){
        ptr = head;
    }
    
    if(ptr->left == nullptr && ptr->right == nullptr){
        std::cout << ptr->name << std::endl;
    }
    else {
        std::cout << ptr->name << std::endl;
        if(ptr->left != nullptr){
            printNode(ptr->left);
        }
        if(ptr->right != nullptr){
            printNode(ptr->right);
        }
    }
}

