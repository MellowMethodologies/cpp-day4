#include "Dog.hpp"

Dog:: Dog()
{
    setType("Dog");
    br = new Brain();
    std::cout << "(Dog)" << "default constructor"<< std::endl;
}

Dog &Dog::operator=(const Dog &a)
{
    if (a.br)
    {
        setType(a.type);
        delete br;
        br = new Brain(*(a.br));
    }
    std::cout << "(Dog)" << "assignement operator"<< std::endl;
    return *this;
}

Dog::Dog(const Dog &a)
{
    std::cout << "(Dog)" << "copy constructor"<< std::endl;
    if (a.br)
    {
        setType(a.type);
        delete br;
        br = new Brain(*(a.br));
    }
    *this = a;
}

Dog::~Dog()
{
    delete(br);
    std::cout << "(Dog)" << "destructor"<< std::endl;
}

void Dog::makeSound() const
{
    std::cout<< "Bark\n";
}