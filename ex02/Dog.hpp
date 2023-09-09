# ifndef _DOG_HPP
#define _DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    private:
        Brain *br;
    public:
        Dog();
        ~Dog();
        Dog(const Dog &a);
        Dog &operator=(const Dog &A);
        void makeSound() const;
};  

#endif