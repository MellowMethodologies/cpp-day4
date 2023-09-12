#include "AMateria.hpp"

std::string  const &AMateria::getType() const { return this->type; }

/*------------------------------------*/
AMateria::AMateria(AMateria const &A) { *this = A; }

AMateria::AMateria(){}

AMateria::~AMateria(){}

AMateria::AMateria(std::string const & type):type(type){}
/*recheck this (should we copy the type here or not?)*/
AMateria& AMateria ::operator=(AMateria const &a)
{
    return *this;
}
/* ^ -- Orthodox Canonical form -- ^  */

