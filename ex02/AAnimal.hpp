# ifndef _AANIMAL_HPP
#define _AANIMAL_HPP

#include <iostream>

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal();
        void setType(std::string type);
        std::string getType();
        virtual void makeSound() const = 0;
        virtual ~AAnimal();
        AAnimal &operator=(const AAnimal &A);
        AAnimal(const AAnimal &a);
};

#endif