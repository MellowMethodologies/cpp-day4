#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
    private:
        std::string type;
    public:
        Cure();
        Cure(const Cure &a);
        Cure &operator=(Cure const &a);
        Cure* clone() const;
        void use(ICharacter& target);
};

#endif