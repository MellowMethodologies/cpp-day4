#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    setType("WrongCat");
    std::cout << "(WrongCat)" << "default constructor"<< std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &a)
{
    setType(a.type);
    std::cout << "(WrongCat)" << "assignement operator"<< std::endl;
    return *this;
}

WrongCat::WrongCat(const WrongCat &a)
{
    std::cout << "(WrongCat)" << "copy constructor"<< std::endl;
    *this = a;
}

WrongCat::~WrongCat()
{
    std::cout << "(WrongCat)" << "destructor"<< std::endl;
}

void WrongCat::makeSound() const
{
    std::cout<< "Meow\n";
}