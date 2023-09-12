#include "Character.hpp"
#include "AMateria.hpp"

std::string const &Character:: getName() const {
    return this->name;
}

void Character:: equip(AMateria* m){

}

void Character:: unequip(int idx) {

}

void Character:: use(int idx, ICharacter& target){
    
}


/*      -Orthodox Canonical form    -*/

Character const &Character::operator=(Character &t) {
    this->name = t.name;
    for (int i = 0; i < 4; i++)
        this->T[i] = t.T[i];
    return *this;
}

Character::Character () {}

Character::Character(Character const &t) {
    this->name = t.name;
    for (int i = 0; i < 4; i++)
        this->T[i] = t.T[i];
}
Character::~Character () {}

/*  -------------------------------  */