//
// Created by itssiem on 2/21/24.
//

#ifndef MYCLASS_H
#define MYCLASS_H



class MyClass {
public:
    int x;
    int* p;
    MyClass();
    MyClass(int number1, int number2);
    ~MyClass();
    void print();
    void setX(int number);
    void setP(int number);
    void removeP();
};



#endif //MYCLASS_H
