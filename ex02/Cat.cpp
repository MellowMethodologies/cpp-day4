#include "Cat.hpp"

Cat::Cat()
{
    br = new Brain();
    std::cout << "(Cat)" << "default constructor"<< std::endl;
}

Cat &Cat::operator=(const Cat &a)
{
    setType(a.type);
    delete br;
    br = new Brain(*(a.br));
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
    delete(br);
    std::cout << "(Cat)" << "destructor"<< std::endl;
}

void Cat::makeSound() const
{
    std::cout<< "Meow\n";
}