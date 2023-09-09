# ifndef _CAT_HPP
#define _CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        ~Cat();
        Cat(const Cat &a);
        Cat &operator=(const Cat &A);
        void makeSound();
};

#endif