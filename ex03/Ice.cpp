#include "Ice.hpp"

Ice::Ice(Ice const &A)
{
    *this = A;
}

Ice::Ice(): AMateria("ice")
{
}

Ice::~Ice()
{   
}

Ice& Ice ::operator=(Ice const &a)
{
    this->type= a.type;
    return *this;
}

AMateria* Ice::clone() const { return (new Ice()); }

void Ice:: use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
}