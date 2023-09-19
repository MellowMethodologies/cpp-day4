#include "Brain.hpp"

Brain:: Brain()
{
    std::cout << "(Brain)" << "default constructor"<< std::endl;
}

Brain::Brain(const Brain &a)
{
    std::cout << "(Brain)" << "copy constructor"<< std::endl;
    *this = a;
}

Brain::~Brain()
{
    std::cout << "(Brain)" << "destructor"<< std::endl;
}

Brain& Brain::operator=( const Brain& src )
{
    std::cout << "Brain copy assignement operator called." << std::endl;
    for ( int i = 0; i < 100; i++ )
        this->idea[i] = src.idea[i];
    return *this;
}