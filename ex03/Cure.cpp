#include "Cure.hpp"

Cure::Cure(Cure const &A)
{
    *this = A;
}

Cure::Cure():type("cure")
{

}

Cure& Cure ::operator=(Cure const &a)
{
    this->type= a.type;
    return *this;
}

Cure* Cure:: clone() const {return (new Cure());}
