#include <iostream>
#include "Node.cpp"
using namespace std;

#pragma once

class LinkedList {
    Node* head;
public:
    int nums;
    LinkedList() {
        head = NULL;
    }

    void insertNode(int num);
    void deleteNode(int index);
    Node* getNode(int index);
    void modifyNode(int index, int num);

private:
};