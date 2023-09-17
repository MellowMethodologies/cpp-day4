# ifndef _WANIMAL_HPP
#define _WANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        void setType(std::string type);
        std::string getType();
        virtual void makeSound() const;
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal &operator=(const WrongAnimal &A);
        WrongAnimal(const WrongAnimal &a);
};

#endif