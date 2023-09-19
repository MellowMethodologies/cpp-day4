#include "WrongAnimal.hpp"

void WrongAnimal::setType(std::string typ)
{
    this->type = typ; 
}

std::string WrongAnimal::getType()
{
    return this->type;
}

WrongAnimal:: WrongAnimal():type("random")
{
    std::cout << "(WrongAnimal)" << "default constructor"<< std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &a)
{
    this->type = a.type;
    std::cout << "(WrongAnimal)" << "assignement operator"<< std::endl;
    return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
    std::cout << "(WrongAnimal)" << "copy constructor"<< std::endl;
    *this = a;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "(WrongAnimal)" << "destructor"<< std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout<< "random noise\n";
}