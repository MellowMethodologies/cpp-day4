#include "Cat.hpp"

Cat::Cat()
{
    br = new Brain();
    std::cout << "(Cat)" << "default constructor"<< std::endl;
}

Cat &Cat::operator=(const Cat &a)
{
    if (a.br)
    {
        setType(a.type);
        delete br;
        br = new Brain(*(a.br));
    }
    std::cout << "(Cat)" << "assignement operator"<< std::endl;
    return *this;
}

Cat::Cat(const Cat &a)
{
    *this = a;
    std::cout << "(Cat)" << "copy constructor"<< std::endl;
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