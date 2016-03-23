/*  This is an implementation of the Strategy Pattern "Duck Simulator"
    from Head First Design Patterns. It is implemented in C++ rather
    than Java (how the book implements it).
*/

#include "RocketFlyBehavior.h"
#include <iostream>

RocketFlyBehavior::~RocketFlyBehavior()
{
    std::cout << "RocketFlyBehavior destructor called.\n";
};

void RocketFlyBehavior::fly()
{
    std::cout << "This duck blasts off...To Infinity & Beyond!\n";
}
