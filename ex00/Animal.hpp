# ifndef _ANIMAL_HPP
#define _ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        void setType(std::string type);
        std::string getType();
        virtual void makeSound() const;
        Animal();
        virtual ~Animal();
        Animal &operator=(const Animal &A);
        Animal(const Animal &a);
};

#endif