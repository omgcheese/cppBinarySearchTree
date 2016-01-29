//
//  main.cpp
//  cppBinaryTree
//
//  Created by Jinwook Lee on 2016-01-27.
//  Copyright (c) 2016 Jinwook Lee. All rights reserved.
//

#include <iostream>
#include "NodeList.h"

using namespace std;

//           N1
//      N2        N3
//   N4    N5  N6   N7

int main() {
    NodeList* n = new NodeList;
    string name;
    while(true){
        cout << "Please type Binary Node Name you want to add(Adding from left to right), or enter q to quit\n";
        cin >> name;
        if(name =="q"){
            break;
        }
        n->addNode(name);
    }
    
    n->printNode(nullptr);
    
    return 0;
}
