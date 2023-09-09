#include "AMateria.hpp"

std::string  const &AMateria::getType() const
{
    return this->type;
}

AMateria::AMateria(AMateria const &A)
{
    *this = A;
}

AMateria::AMateria(){

}

AMateria::AMateria(std::string const & type):type(type)
{

}

AMateria& AMateria ::operator=(AMateria const &a)
{
    this->type= a.type;
    return *this;
}
