#include "AAnimal.hpp"

void AAnimal::setType(std::string typ)
{
    this->type = typ; 
}

std::string AAnimal::getType()
{
    return this->type;
}

AAnimal:: AAnimal():type("random")
{
    std::cout << "(Animal)" << "default constructor"<< std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &a)
{
    this->type = a.type;
    std::cout << "(Animal)" << "assignement operator"<< std::endl;
    return *this;
}

AAnimal::AAnimal(const AAnimal &a)
{
    std::cout << "(Animal)" << "copy constructor"<< std::endl;
    *this = a;
}

AAnimal::~AAnimal()
{
    std::cout << "(Animal)" << "destructor"<< std::endl;
}
