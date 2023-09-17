# ifndef _WCAT_HPP
#define _WCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat &a);
        WrongCat &operator=(const WrongCat &A);
        void makeSound() const ;
};

#endif