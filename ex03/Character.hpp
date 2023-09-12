#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class Character:  public ICharacter
{
    private:
        std::string name;
        AMateria *T[4];
    public:
        Character const &operator=(Character &t);
        Character ();
        Character(Character const &t);
        ~Character ();
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};
#endif