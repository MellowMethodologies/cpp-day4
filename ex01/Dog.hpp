# ifndef _DOG_HPP
#define _DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *br;
    public:
        Dog();
        ~Dog();
        Dog(const Dog &a);
        Dog &operator=(const Dog &A);
        void makeSound();
};  

#endif