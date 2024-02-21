//
// Created by itssiem on 2/21/24.
//

#include "MyStack.h"

#include <iostream>

MyStack::MyStack() {
    top = nullptr;
}

MyStack::~MyStack() {
    // Todo: I'm not sure if this is correct
    Block* b = top;
    while (b != nullptr) {
        Block* nb = b->next;
        delete b;
        b = nb;
    }
    delete top;
}

bool MyStack::isEmpty() {
    return top == nullptr;
}

void MyStack::push(int x) {
    Block* ot = top;
    top = new Block;
    top->next = ot;
    top->number = x;
}

int MyStack::pop() {
    int x = top->number;
    top = top->next;
    return x;
}

void MyStack::print() {
    Block* b = top;
    while(b != nullptr) {
        std::cout << b->number << " ";
        b = b->next;
    }
    std::cout << "      size: " << this->size() << " sum: " << this->sum() << std::endl;
}

int MyStack::size() {
    int i = 0;
    Block* b = top;
    while (b != nullptr) {
        i++;
        b = b->next;
    }
    return i;
}

int MyStack::sum() {
    int sum = 0;
    Block* b = top;
    while (b != nullptr) {
        sum += b->number;
        b = b->next;
    }
    return sum;
}
