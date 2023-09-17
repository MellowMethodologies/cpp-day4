# ifndef _DOG_HPP
#define _DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        ~Dog();
        Dog(const Dog &a);
        Dog &operator=(const Dog &A);
        void makeSound() const;
};  

#endif