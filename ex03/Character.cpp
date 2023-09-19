#include "Character.hpp"
#include "AMateria.hpp"

class ICharacter;

std::string const &Character:: getName() const {return this->name;}

void Character:: equip(AMateria* m)
{
    int c = 0;
    int i;

    for (i = 0; i < 4; i++)
    {
        if (!T[i])
        {
            c = 1;
            T[i] = m;
            break;
        }
    }
    if (i == 4 && c == 0)
        delete(m);
}

void Character:: unequip(int idx)
{
    if(idx < 4 && idx >= 0){
        T_GC[idx] = T[idx];
        T[idx] = NULL;}
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
        delete(T_GC[i]);
        this->T[i] = t.T[i]->clone();
    }
    return *this;
}

Character::Character () {}

Character::Character (std::string _name) : name(_name)
{
    for (int i=0; i < 4; i++)
        T[i] = NULL;
}

Character::Character(Character const &t) {*this = t;}

Character::~Character ()
{
    for(int i = 0; i < 4; i++){
        delete(T[i]);
        delete(T_GC[i]);}
}

/*  -------------------------------  */
