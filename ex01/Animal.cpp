#include "Animal.hpp"

void Animal::setType(std::string typ)
{
    this->type = typ; 
}

std::string Animal::getType()
{
    return this->type;
}

Animal:: Animal():type("random")
{
    std::cout << "(Animal)" << "default constructor"<< std::endl;
}

Animal &Animal::operator=(const Animal &a)
{
    this->type = a.type;
    std::cout << "(Animal)" << "assignement operator"<< std::endl;
    return *this;
}

Animal::Animal(const Animal &a)
{
    std::cout << "(Animal)" << "copy constructor"<< std::endl;
    *this = a;
}

Animal::~Animal()
{
    std::cout << "(Animal)" << "destructor"<< std::endl;
}

void Animal::makeSound() const
{
    std::cout<< "random noise\n";
}