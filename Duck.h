/*  This is an implementation of the Stategy Pattern "Duck Simulator"
    from Head First Design Patterns. It is implemented in C++ rather
    than Java (how the book implements it).
*/

#pragma once
#include <string>

class Duck
{
public:
    virtual void display(){};
    virtual void quack(){};
    virtual void fly(){};
    virtual void swim(){};
    void doQuack();
    void doFly();
    void doSwim();
    void setFly();
    void setQuack();
    void setSwim();

private:
    std::string ID {"Generic Duck"};
};
