//
// Created by itssiem on 2/21/24.
//

#ifndef MYSTACK_H
#define MYSTACK_H


struct Block {
    int number;
    Block* next;
};

class MyStack {
public:
    Block* top;
    MyStack();
    ~MyStack();
    bool isEmpty();
    void push(int x);
    int pop();
    void print();
    int size();
    int sum();
};



#endif //MYSTACK_H
