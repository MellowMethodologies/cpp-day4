# ifndef _CAT_HPP
#define _CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *br;
    public:
        Cat();
        ~Cat();
        Cat(const Cat &a);
        Cat &operator=(const Cat &A);
        void makeSound();
};

#endif