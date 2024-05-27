#include <iostream>
using namespace std;

#pragma once

class Node {
public:

    Node() {
        this->data = 0;
        this->prev = 0;
        this->next = NULL;
        // data = 0;
        // this->prev = 0;
        // this->next = NULL;
    }

    Node(int num) {
        this->data = num;
        this->prev = 0;
        this->next = NULL;
        // data = num;
        // this->prev = 0;
        // this->next = NULL;
    }

    ~Node() {
        delete this;
    }

    void setNext(Node* next) {
        this->next = next;
    }

    void setPrev(Node* prev) {
        this->prev = prev;
    }

    void setValue(int num) {
        this->data = num;
    }

    int getValue() {
        return data;
    }

    Node* getNext() {
        return next;
    }

    Node* getPrev() {
        return prev;
    }


private:
    int data;
    Node* next;
    Node* prev;

    
};