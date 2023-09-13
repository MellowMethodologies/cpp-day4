#include "Character.hpp"
#include "AMateria.hpp"

class ICharacter;


std::string const &Character:: getName() const {
    return this->name;
}

void Character:: equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!T[i])
        {
            T[i] = m;
            break;
        }
    }
}

void Character:: unequip(int idx) {
    (idx < 4 && idx >= 0) ? T[idx] = NULL : 0;
}

void Character:: use(int idx, ICharacter& target){
    if (idx < 4 && idx >=0 && T[idx])
        this->T[idx]->use(target);
}

/*      -Orthodox Canonical form    -*/

Character &Character::operator=(Character const &t) {
    this->name = t.name;
    for (int i = 0; i < 4; i++)
    {
        delete(T[i]);
        this->T[i] = t.T[i]->clone();
    }
    return *this;
}

Character::Character () {}

Character::Character (std::string _name):name(_name)  {
    for (int i=0;i < 4;i++)
        T[i] = NULL;
}

Character::Character(Character const &t) {
    this->name = t.name;
    for (int i = 0; i < 4; i++)
        this->T[i] = t.T[i];
}

Character::~Character () {
    for(int i = 0; i < 4; i++)
        if (T[i])
            delete(T[i]);
}

/*  -------------------------------  */