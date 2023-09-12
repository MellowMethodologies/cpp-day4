#include "Cure.hpp"

Cure::Cure(Cure const &A)
{
    *this = A;
}

Cure::Cure():type("cure")
{}

Cure& Cure ::operator=(Cure const &a)
{
    this->type= a.type;
    return *this;
}

Cure* Cure:: clone() const {return (new Cure());}

void Cure::use(ICharacter &target)
{
    std::cout << " * heals " << target.getName() <<"\`s wounds *" << std::endl;
}