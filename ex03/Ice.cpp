#include "Ice.hpp"

Ice::Ice(Ice const &A)
{
    *this = A;
}

Ice::Ice():type("ice")
{
}

Ice& Ice ::operator=(Ice const &a)
{
    this->type= a.type;
    return *this;
}
