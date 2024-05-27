#include <iostream>
#include "LinkedList.cpp"
#include "Node.cpp"

using namespace std;

#pragma once

int main() {
    Node* node = new Node(3);
    Node* node2= new Node(5);
    node->setNext(node2);

    cout << node->getValue();
    cout << node->getNext()->getValue();

    return 0;
}