#include "Cat.hpp"

Cat::Cat()
{
    setType("Cat");
    std::cout << "(Cat)" << "default constructor"<< std::endl;
}

Cat &Cat::operator=(const Cat &a)
{
    setType(a.type);
    std::cout << "(Cat)" << "assignement operator"<< std::endl;
    return *this;
}

Cat::Cat(const Cat &a)
{
    std::cout << "(Cat)" << "copy constructor"<< std::endl;
    *this = a;
}

Cat::~Cat()
{
    std::cout << "(Cat)" << "destructor"<< std::endl;
}

void Cat::makeSound() const
{
    std::cout<< "Meow\n";
}