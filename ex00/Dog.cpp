#include "Dog.hpp"

Dog:: Dog()
{
    setType("Dog");
    std::cout << "(Dog)" << "default constructor"<< std::endl;
}

Dog &Dog::operator=(const Dog &a)
{
    this->type = a.type;
    std::cout << "(Dog)" << "assignement operator"<< std::endl;
    return *this;
}

Dog::Dog(const Dog &a)
{
    std::cout << "(Dog)" << "copy constructor"<< std::endl;
    *this = a;
}

Dog::~Dog()
{
    std::cout << "(Dog)" << "destructor"<< std::endl;
}

void Dog::makeSound()
{
    std::cout<< "Bark\n";
}