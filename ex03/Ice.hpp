#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"


class Ice : public AMateria
{
    private:
        std::string type;
    public:
        Ice();
        ~Ice();
        Ice(const Ice &a);
        Ice &operator=(Ice const &a);
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif